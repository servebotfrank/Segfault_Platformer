// GameObject Source File
// Last Edited: April 12th, 2019
// Edited by Kim F.
//
//  The GameObject Class is an abstract class
//      representing a generalized game entity.
//      The things all gameobject will have are ...
//      1. A Sprite
//      2. Position
//      3. Width
//      4. Height
//      5. Unique update() function, to be called every frame

#include <iostream>
#include "GameObject.hpp"


GameObject::GameObject(const std::string & textureLocation, const sf::Vector2f & position, const sf::Vector2f & velocity, const float & width, const float & height, const bool & isStatic)
    : _physicsComponent(position, velocity, width, height, isStatic)
{
    loadTexture(textureLocation);
}

void GameObject::loadTexture(const std::string & textureLocation)
{
    if(!getTexture().loadFromFile(textureLocation))
    {
    }
}

void GameObject::createSprite()
{
    _sprite.setTexture(getTexture());
}

sf::Sprite GameObject::getSprite()
{
    return _sprite;
}

//ACCESSORS
sf::Texture GameObject::getTexture()
{
    return _texture;
}

sf::Vector2f GameObject::getPosition()
{
    return _position;
}

sf::Vector2f GameObject::getVelocity()
{
    return _velocity;
}

//MUTATORS
void GameObject::setPosition(sf::Vector2f & newPosition)
{
    _position = newPosition;
}

void GameObject::setVelocity(sf::Vector2f & newVelocity)
{
    _velocity = newVelocity;
}

void GameObject::update()
{    
}