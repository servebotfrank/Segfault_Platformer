#ifndef GAME_OBJECT_FACTORY_HPP
#define GAME_OBJECT_FACTORY_HPP

#include "GameObject.hpp"

#include <SFML/Graphics.hpp>

// Factory
GameObject* GameObjectFactory(
    const std::string& type,
    const std::string& name,
    const std::string& pathToTexture,
    const sf::Vector2<double>& position
);

#endif