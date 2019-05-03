// gameobjectfactory.cpp

#include "gameobjectfactory.hpp"

#include "Player.hpp"
#include "Platform.hpp"

#include <exception>
using std::runtime_error;

using std::string;
using std::shared_ptr;
using std::make_shared;
using std::move;

using sf::Texture;
using sf::Vector2f;

shared_ptr<GameObject> GameObjectFactory(
    const string& type,
    const string& name,
    const Texture& texture,
    const Vector2f& position,
    const Vector2f& velocity,
    const Vector2f& size,
    bool isStatic)
{
    if (type == "player") {
        return make_shared<Player>(texture, position, velocity, size, isStatic);
    } else if (type == "platform") {
        return make_shared<Platform>(texture, position, velocity, size, isStatic);
    } else {
        throw runtime_error("Failed to create a GameObject of type " + type);
    }
}