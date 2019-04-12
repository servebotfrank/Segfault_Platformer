// levelloader.cpp

#include "levelloader.hpp"

#include "picojson/picojson.h"

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

//using picojson = json;

vector<unique_ptr<GameObject>> LevelLoader::loadLevel(const string& pathToLevel)
{
    auto fileSource = readFile(pathToLevel);
    std::cout << fileSource << std::endl;
    return {};
}
void LevelLoader::saveLevel(const string& pathToFile, vector<unique_ptr<GameObject>> levelObjects) const
{

}
optional<sf::Texture> LevelLoader::getTexture(const string& pathToTexture) const
{

}
void LevelLoader::loadTexture(const string& pathToTexture)
{

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