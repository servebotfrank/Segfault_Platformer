// levelloader.cpp

#include "levelloader.hpp"

#include <sstream>
using std::stringstream;
#include <fstream>
using std::ifstream;
#include <exception>
using std::runtime_error;

using std::string;
using std::vector;
using std::optional;
using std::unique_ptr;
using std::make_unique;

#include <iostream>

#include "include/rapidjson/error/en.h"
#include "include/rapidjson/filereadstream.h"

#include "include/rapidjson/document.h"
#include "include/rapidjson/writer.h"
#include "include/rapidjson/stringbuffer.h"

//using json = rapidjson;

LevelLoader::LevelLoader(const std::string& pathToSchema)
    : _pathToSchema(pathToSchema)
    , _levelSchema(createSchemaDocument(_pathToSchema))
    , _levelValidator(_levelSchema)
{}

vector<unique_ptr<GameObject>> LevelLoader::loadLevel(const string& pathToLevel)
{
    auto level = createDocument(pathToLevel);
    
    auto schemaDocument = createSchemaDocument(_pathToSchema);
    auto valid = level.Accept(_levelValidator);
    _levelValidator.Reset();
    if (!valid) {
        throw runtime_error("Json " + pathToLevel + " does not comply with the schema " + _pathToSchema);
    }

    auto name = level["name"].GetString();
    _relativePathToAssets = level["relative path to assets"].GetString();

    const auto& textureSources = level["textures"];
    for (auto& textureSource: textureSources.GetArray()) {
        loadTexture(textureSource["path"].GetString());
    }

    vector<unique_ptr<GameObject>> gameObjects;
    const auto& gameObjectSources = level["game objects"];
    for (auto& gameObjectSource: gameObjectSources.GetArray()) {
        auto objectName = gameObjectSource["name"].GetString();
        auto objectTypeString = gameObjectSource["type"].GetString();
        const auto& location = gameObjectSource["location"];
        auto x = location["x"].GetDouble();
        auto y = location["y"].GetDouble();
        const auto& size = gameObjectSource["size"];
        auto width = size["width"].GetDouble();
        auto height = size["height"].GetDouble();
        auto associatedTexture = gameObjectSource["texture"].GetString();
        auto texture = getTexture(associatedTexture);
        //gameObject.push_back();
    }
    return move(gameObjects);
}
void LevelLoader::saveLevel(const string& pathToFile, vector<unique_ptr<GameObject>> levelObjects) const
{

}
optional<sf::Texture> LevelLoader::getTexture(const string& textureFileName) const
{
    auto pathToTexture = _relativePathToAssets+textureFileName;
    if (_loadedTextures.find(pathToTexture) != _loadedTextures.end()) {
        return optional<sf::Texture>(_loadedTextures.at(pathToTexture));
    }
    return {};
}
void LevelLoader::loadTexture(const string& textureFileName)
{
    auto pathToTexture = _relativePathToAssets+textureFileName;
    if (_loadedTextures.find(pathToTexture) == _loadedTextures.end()) {
        sf::Texture texture;
        texture.loadFromFile(pathToTexture);
        _loadedTextures.insert({pathToTexture, texture});
    }
}
string LevelLoader::readFile(const string& pathToFile) const
{
    ifstream file(pathToFile);
    if (!file) {
        throw runtime_error("File not found " + pathToFile);
    }

    stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}
rapidjson::Document LevelLoader::createDocument(const std::string& pathToJson) const
{
    auto fileSource = readFile(pathToJson);
    rapidjson::Document document;
    document.Parse(fileSource.c_str());
    if (document.HasParseError()) {
        throw runtime_error("Not a valid json file " + pathToJson);
    }
    return document;
}

rapidjson::SchemaDocument LevelLoader::createSchemaDocument(const std::string& pathToSchema) const
{
    auto document = createDocument(pathToSchema);
    return rapidjson::SchemaDocument(document);
}
