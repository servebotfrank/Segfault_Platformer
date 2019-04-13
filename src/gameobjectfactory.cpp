// gameobjectfactory.cpp

#include "gameobjectfactory.hpp"

#include "Player.hpp"
#include "Platform.hpp"

#include <exception>
using std::runtime_error;

using std::string;
using std::unique_ptr;
using std::make_unique;
using std::move;

using sf::Texture;
using sf::Vector2;

unique_ptr<GameObject> GameObjectFactory(
    const string& type,
    const string& name,
    const Texture& texture,
    const Vector2<double>& position,
    const Vector2<double>& velocity,
    const Vector2<double>& size,
    bool isStatic
{
    if (type == "player") {
        return make_unique<Player>(texture, position, velocity, size, isStatic);
    } else if (type == "platform") {
        return make_unique<Platform>(texture, position, velocity, size, isStatic);
    } else {
        throw runtime_error("Failed to create a GameObject of type " + type);
    }
}