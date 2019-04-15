// PlatformerGame.cpp

#include "PlatformerGame.hpp"

using std::string;
using std::vector;
using std::move;

PlatformerGame::PlatformerGame(const std::string& configFilePath)
    : _window(sf::VideoMode(480, 320), "Platformer That Needs a Name")
    , _levelLoader("../assets/levelschema.json")
    , _gameObjects(move(_levelLoader.loadLevel("../assets/testlevel.json")))
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
        gameObject->update(/*_dt*/);
	}
}
void PlatformerGame::display() {
	for (const auto & gameObject : _gameObjects) {

	}
}