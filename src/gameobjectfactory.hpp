#ifndef GAME_OBJECT_FACTORY_HPP
#define GAME_OBJECT_FACTORY_HPP

#include "GameObject.hpp"

// Factory
std::unique_ptr<GameObject> GameObjectFactory(
    const std::string& type,
    const std::string& name,
    const sf::Vector2f& position
);

#endif