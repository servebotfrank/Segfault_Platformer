#ifndef GAME_OBJECT_FACTORY_HPP
#define GAME_OBJECT_FACTORY_HPP

#include "GameObject.hpp"

#include <SFML/Graphics.hpp>

// Factory
unique_ptr<GameObject> GameObjectFactory(
    const std::string& type,
    const std::string& name,
    const sf::Texture& texture,
    const sf::Vector2<double>& position,
    const sf::Vector2<double>& velocity,
    const sf::Vector2<double>& size,
    bool isStatic
);

#endif