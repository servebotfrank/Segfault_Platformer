// PlatformerGame.hpp

#ifndef PLATFORMER_GAME_HPP
#define PLATFORMER_GAME_HPP

#include "GameObject.hpp"
#include "levelloader.hpp"
#include "configloader.hpp"

#include <string>

#include <SFML/Audio.hpp>

class PlatformerGame {
public:
    PlatformerGame(const std::string& configFilePath);
    void run();
private:
    void update();
    void display();

    ConfigLoader _configLoader;

    sf::View _view;
    sf::RenderWindow _window;
    LevelLoader _levelLoader;
    sf::Music _music;
    std::vector<std::shared_ptr<GameObject>> _gameObjects;

    sf::Texture _backgroundTexture;
    sf::Sprite _backgroundSprite;

    float _dt;
};

#endif // PLATFORMER_GAME_HPP