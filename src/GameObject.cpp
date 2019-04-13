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


GameObject::GameObject(const sf::Texture & texture, const sf::Vector2f & position, const sf::Vector2f & velocity, const sf::Vector2f & size, const bool & isStatic)
    : _physicsComponent(position, velocity, size, isStatic)
{
    createSprite(texture);
}

GameObject::~GameObject() 
{
    
}

void GameObject::createSprite(sf::Texture texture)
{
    _sprite.setTexture(texture);
}

sf::Sprite GameObject::getSprite()
{
    return _sprite;
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