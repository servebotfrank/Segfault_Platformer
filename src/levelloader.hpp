// levelloader.hpp

#include <optional>
#include <string>
#include <vector>
#include <utility>

#include <SFML/Graphics.hpp>

#ifndef LEVEL_LOADER_HPP
#define LEVEL_LOADER_HPP

class GameObject {

};

// Singleton
class LevelLoader {
public:
    LevelLoader()=default;
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
    std::string readFile(const std::string& pathToFile) const;

    std::map<std::string, sf::Texture> loadedTextures;

};

#endif // LEVEL_LOADER_HPP