// levelloader.cpp

#include "levelloader.hpp"
#include "jsonHelper.hpp"
#include "gameobjectfactory.hpp"

#include "rapidjson/error/en.h"
#include "rapidjson/filereadstream.h"

#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"

#include <sstream>
#include <fstream>
#include <exception>
#include <iostream>

using std::runtime_error;
using std::ifstream;
using std::stringstream;
using std::string;
using std::vector;
using std::unique_ptr;
using std::make_unique;

using sf::Vector2f;
using sf::Texture;

LevelLoader::LevelLoader(
    const std::string& pathToSchema,
    const std::string& pathToTextures,
    const std::string& pathToLevels,
    const std::string& levelName)
        : _pathToSchema(pathToSchema)
        , _levelSchema(JSONHelper::createSchemaDocument(pathToSchema))
        , _levelValidator(_levelSchema)
        , _pathToTextures(pathToTextures)
        , _loadedTextures()
        , _pathToLevels(pathToLevels)
{
    if (!levelName.empty()) {
        loadLevel(levelName);
    }
}
void LevelLoader::loadLevel(const string& pathToLevel)
{
    auto level = JSONHelper::createDocument(_pathToLevels + pathToLevel);
    
    auto valid = level.Accept(_levelValidator);
    _levelValidator.Reset();
    if (!valid) {
        throw runtime_error("Json " + _pathToLevels+pathToLevel + " does not comply with the schema " + _pathToSchema);
    }

    auto name = level["name"].GetString();

    _musicPath = level["music path"].GetString();

    _backgroundTexture = loadTexture(level["background texture"].GetString());

    const auto& textureSources = level["textures"];
    for (auto& textureSource: textureSources.GetArray()) {
        loadTexture(textureSource["path"].GetString());
    }

    const auto& gameObjectSources = level["game objects"];
    for (auto& gameObjectSource: gameObjectSources.GetArray()) {
        auto objectTypeString = gameObjectSource["type"].GetString();
        auto objectName = gameObjectSource["name"].GetString();
        const auto& positionSource = gameObjectSource["position"];
        auto x = positionSource["x"].GetDouble();
        auto y = positionSource["y"].GetDouble();
        Vector2f position(x, y);
        const auto& velocitySource = gameObjectSource["velocity"];
        auto dx = velocitySource["x"].GetDouble();
        auto dy = velocitySource["y"].GetDouble();
        Vector2f velocity(dx, dy);
        const auto& sizeSource = gameObjectSource["size"];
        auto width = sizeSource["width"].GetDouble();
        auto height = sizeSource["height"].GetDouble();
        Vector2f size(width, height);
        auto associatedTexture = gameObjectSource["texture"].GetString();
        auto texture = getTexture(associatedTexture);
        auto isStatic = gameObjectSource["is static"].GetBool();
        _gameObjects.push_back(
            GameObjectFactory(
                objectTypeString,
                objectName,
                texture,
                position,
                velocity,
                size,
                isStatic
            )
        );
    }
}
std::shared_ptr<Player> LevelLoader::getPlayer() const {
    return _player;
}
std::vector<std::shared_ptr<GameObject>> LevelLoader::getGameObjects() const {
    return _gameObjects;
}
std::string LevelLoader::getMusicPath() const {
    return _musicPath;
}
void LevelLoader::saveLevel(const string& pathToFile, vector<unique_ptr<GameObject>> levelObjects) const
{

}
sf::Texture LevelLoader::getTexture(const string& textureFileName) const
{
    auto pathToTexture = _pathToTextures+textureFileName;
    if (_loadedTextures.find(pathToTexture) != _loadedTextures.end()) {
        return sf::Texture(_loadedTextures.at(pathToTexture));
    }
    else {
        throw runtime_error("Failed to find texture " + pathToTexture);
    }
}
sf::Texture LevelLoader::loadTexture(const string& textureFileName)
{
    auto pathToTexture = _pathToTextures+textureFileName;
    sf::Texture texture;
    if (_loadedTextures.find(pathToTexture) == _loadedTextures.end()) {
        texture.loadFromFile(pathToTexture);
        _loadedTextures.insert({pathToTexture, texture});
    }
    return texture;
}
