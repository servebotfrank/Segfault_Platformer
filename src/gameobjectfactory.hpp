#ifndef GAME_OBJECT_FACTORY_HPP
#define GAME_OBJECT_FACTORY_HPP

#include "GameObject.hpp"

#include <SFML/Graphics.hpp>

// Factory
std::unique_ptr<GameObject> GameObjectFactory(
    const std::string& type,
    const std::string& name,
    const sf::Texture& texture,
    const sf::Vector2f& position,
    const sf::Vector2f& velocity,
    const sf::Vector2f& size,
    bool isStatic
);

#endif