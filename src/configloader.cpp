// configloader.cpp

#include "configloader.hpp"

#include "jsonHelper.hpp"

using std::string;
using std::vector;
using std::map;
using std::runtime_error;

ConfigLoader::ConfigLoader(const string& pathToConfigFile)
    : _pathToConfigFile(pathToConfigFile)
    , _windowName()
    , _windowWidth{0}
    , _windowHeight{0}
    , _pathToSchema()
    , _pathToTextures()
    , _levelNamesAndPaths()
{
    auto document = JSONHelper::createDocument(_pathToConfigFile);
    _windowName = document["window title"].GetString();
    const auto& windowSizeSource = document["window size"];
    _windowWidth = windowSizeSource["x"].GetInt();
    _windowHeight = windowSizeSource["y"].GetInt();
    _pathToTextures = document["path to textures"].GetString();
    _pathToSchema = document["path to schema"].GetString();
    _pathToLevels = document["path to levels"].GetString();
    const auto& levelNamesAndPathsSource = document["levels"];
    for (auto& namesAndPaths: levelNamesAndPathsSource.GetArray()) {
        _levelNamesAndPaths.insert({
            namesAndPaths["name"].GetString(),
            namesAndPaths["path"].GetString()
        });
    }
}
string ConfigLoader::getWindowName() const
{
    return _windowName;
}
int ConfigLoader::getWindowWidth() const
{
    return _windowWidth;
}
int ConfigLoader::getWindowHeight() const
{
    return _windowHeight;
}
string ConfigLoader::getPathToSchema() const
{
    return _pathToSchema;
}
string ConfigLoader::getPathToTextures() const
{
    return _pathToTextures;
}
string ConfigLoader::getPathToLevels() const
{
    return _pathToLevels;
}
vector<string> ConfigLoader::getLevelNames() const
{
    vector<string> names;
    for (auto const& level: _levelNamesAndPaths) {
        names.push_back(level.first);
    }
    return names;
}
string ConfigLoader::getPathToLevel(const string& levelName) const
{
    if (_levelNamesAndPaths.find(levelName) != _levelNamesAndPaths.end()) {
        return _levelNamesAndPaths.at(levelName);
    } else {
        throw runtime_error("No level named " + levelName);
    }
}