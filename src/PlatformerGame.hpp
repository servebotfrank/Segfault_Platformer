// PlatformerGame.hpp

#ifndef PLATFORMER_GAME_HPP
#define PLATFORMER_GAME_HPP

#include "GameObject.hpp"
#include "levelloader.hpp"
#include "configloader.hpp"

#include <string>

class PlatformerGame {
public:
    PlatformerGame(const std::string& configFilePath);
    void run();
private:
    void update();
    void display();

    ConfigLoader _configLoader;

    sf::RenderWindow _window;
    LevelLoader _levelLoader;
    std::vector<std::unique_ptr<GameObject>> _gameObjects;

    float _dt;
};

#endif // PLATFORMER_GAME_HPP