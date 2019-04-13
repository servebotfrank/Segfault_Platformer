// levelloader.hpp

#include "GameObject.hpp"
#include "include/rapidjson/schema.h"

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
    LevelLoader(const std::string& pathToSchema);
    ~LevelLoader()=default;
    LevelLoader(const LevelLoader& other)=delete;
    LevelLoader(LevelLoader&& other)=delete;
    LevelLoader& operator=(const LevelLoader& other)=delete;
    LevelLoader& operator=(LevelLoader&& other)=delete;

    bool validateLevel(const std::string& pathToLevel, const std::string& pathToSchema) const;
    std::vector<std::unique_ptr<GameObject>> loadLevel(const std::string& pathToLevel);
    void saveLevel(const std::string& pathToFile, std::vector<std::unique_ptr<GameObject>> levelObjects) const;

    std::optional<sf::Texture> getTexture(const std::string& pathToTexture) const;

    void loadTexture(const std::string& pathToTexture);
private:
    std::string readFile(const std::string& pathToFile) const;

    std::string _relativePathToAssets;
    std::map<std::string, sf::Texture> _loadedTextures;

    std::string _pathToSchema;
    rapidjson::SchemaDocument _levelSchema;
    rapidjson::SchemaValidator _levelValidator;

    rapidjson::Document createDocument(const std::string& pathToJson) const;
    rapidjson::SchemaDocument createSchemaDocument(const std::string& pathToSchema) const;
};

#endif // LEVEL_LOADER_HPP