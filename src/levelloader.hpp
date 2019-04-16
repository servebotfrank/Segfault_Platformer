// levelloader.hpp

#include "GameObject.hpp"
#include "rapidjson/schema.h"

#include <optional>
#include <string>
#include <vector>
#include <utility>

#include <SFML/Graphics.hpp>

#ifndef LEVEL_LOADER_HPP
#define LEVEL_LOADER_HPP

// Singleton
class LevelLoader {
public:
    LevelLoader(const std::string& pathToSchema, const std::string& pathToTextures, const std::string& pathToLevels);
    ~LevelLoader()=default;
    LevelLoader(const LevelLoader& other)=delete;
    LevelLoader(LevelLoader&& other)=delete;
    LevelLoader& operator=(const LevelLoader& other)=delete;
    LevelLoader& operator=(LevelLoader&& other)=delete;

    std::vector<std::unique_ptr<GameObject>> loadLevel(const std::string& pathToLevel);
    void saveLevel(const std::string& pathToFile, std::vector<std::unique_ptr<GameObject>> levelObjects) const;

    std::optional<sf::Texture> getTexture(const std::string& pathToTexture) const;

    void loadTexture(const std::string& pathToTexture);
private:
    std::string _pathToSchema;
    rapidjson::SchemaDocument _levelSchema;
    rapidjson::SchemaValidator _levelValidator;

    std::string _pathToTextures;
    std::map<std::string, sf::Texture> _loadedTextures;

    std::string _pathToLevels;
};

#endif // LEVEL_LOADER_HPP