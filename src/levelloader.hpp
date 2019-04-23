// levelloader.hpp

#include "GameObject.hpp"
#include "rapidjson/schema.h"

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

    std::vector<std::unique_ptr<GameObject>> loadLevel(const std::string& pathToLevel);
    void saveLevel(const std::string& pathToFile, std::vector<std::unique_ptr<GameObject>> levelObjects) const;

    sf::Texture getTexture(const std::string& pathToTexture) const;

    sf::Texture loadTexture(const std::string& pathToTexture);
private:
    std::string _pathToSchema;
    rapidjson::SchemaDocument _levelSchema;
    rapidjson::SchemaValidator _levelValidator;

    std::string _pathToTextures;
    sf::Texture _backgroundTexture;
    std::map<std::string, sf::Texture> _loadedTextures;

    std::string _pathToLevels;
};

#endif // LEVEL_LOADER_HPP