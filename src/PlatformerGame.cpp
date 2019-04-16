// PlatformerGame.cpp

#include "PlatformerGame.hpp"

using std::string;
using std::vector;
using std::move;

PlatformerGame::PlatformerGame(const string& configFilePath)
    : _configLoader(configFilePath)
    , _window(sf::VideoMode(_configLoader.getWindowWidth(), _configLoader.getWindowHeight()), _configLoader.getWindowName())
    , _levelLoader(
        _configLoader.getPathToSchema(),
        _configLoader.getPathToTextures(),
        _configLoader.getPathToLevels())
    , _gameObjects(move(_levelLoader.loadLevel(_configLoader.getPathToLevel("test level"))))
{}
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

        _window.clear();
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