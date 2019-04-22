// PlatformerGame.cpp

#include "PlatformerGame.hpp"

using std::string;
using std::vector;
using std::move;

PlatformerGame::PlatformerGame(const string& configFilePath)
    : _configLoader(configFilePath)
    , _view(
        sf::Vector2f(0, 0),
        sf::Vector2f(_configLoader.getWindowWidth(), _configLoader.getWindowHeight()))
    , _window(sf::VideoMode(_configLoader.getWindowWidth(), _configLoader.getWindowHeight()), _configLoader.getWindowName())
    , _levelLoader(
        _configLoader.getPathToSchema(),
        _configLoader.getPathToTextures(),
        _configLoader.getPathToLevels())
    , _gameObjects(move(_levelLoader.loadLevel(_configLoader.getPathToLevel("test level"))))
    , _backgroundTexture(_levelLoader.getTexture("bg00.png"))
    , _backgroundSprite(_backgroundTexture)
{
    _window.setView(_view);
    _window.clear(sf::Color(0, 255, 255));
    _backgroundSprite.setPosition(sf::Vector2f(-_configLoader.getWindowWidth()/2, -_configLoader.getWindowHeight()/2));
}
void PlatformerGame::run()
{
    sf::Clock clock;
    while (_window.isOpen())
    {
        _dt = clock.getElapsedTime().asSeconds();
        clock.restart();

        sf::Event event;
        while (_window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                _window.close();
        }

        update();

        _window.clear(sf::Color(0, 255, 255));
        _window.draw(_backgroundSprite);
        display();
        _window.display();
    }
}
void PlatformerGame::update()
{
	for (const auto & gameObject : _gameObjects) {
        gameObject->update(_dt);
	}
}
void PlatformerGame::display() {
	for (const auto & gameObject : _gameObjects) {
        gameObject->draw(_window);
	}
}