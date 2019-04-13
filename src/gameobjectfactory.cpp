// gameobjectfactory.cpp

#include "gameobjectfactory.hpp"

#include "Player.hpp"
#include "Platform.hpp"

#include <exception>
using std::runtime_error;

using std::string;
using std::unique_ptr;
using std::make_unique;
#include <memory>
using std::move;

GameObject* GameObjectFactory(
    const string& type,
    const string& name,
    const string& pathToTexture,
    const sf::Vector2<double>& position)
{
    if (type == "player") {
            return new Player(pathToTexture, position, sf::Vector2<double>(0, 0));
    } else if (type == "platform") {
            //return make_unique<Platform>(pathToTexture, position, sf::Vector2<double>(0, 0), false);
    } else {
            throw runtime_error("Failed to create a GameObject of type " + type);
    }
}