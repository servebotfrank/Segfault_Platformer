// configloader.hpp

#ifndef CONFIG_LOADER_HPP
#define CONFIG_LOADER_HPP

#include <string>
#include <vector>
#include <map>

class ConfigLoader {
public:
    ConfigLoader(const std::string& pathToConfigFile);
    std::string getWindowName() const;
    int getWindowWidth() const;
    int getWindowHeight() const;
    std::string getPathToSchema() const;
    std::string getPathToTextures() const;
    std::string getPathToLevels() const;
    std::vector<std::string> getLevelNames() const;
    std::string getPathToLevel(const std::string& levelName) const;
private:
    std::string _pathToConfigFile;
    std::string _windowName;
    int _windowWidth;
    int _windowHeight;
    std::string _pathToSchema;
    std::string _pathToTextures;
    std::string _pathToLevels;
    std::map<std::string, std::string> _levelNamesAndPaths;
};

#endif // CONFIG_LOADER_HPP