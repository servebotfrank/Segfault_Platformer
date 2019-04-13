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

GameObject::GameObject(const std::string & textureLocation, sf::Vector2<double> & position): _position(position)
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

sf::Vector2<double> GameObject::getPosition()
{
    return _position;
}

//MUTATORS
void GameObject::setPosition(sf::Vector2<double> & newPosition)
{
    _position = newPosition;
}

void GameObject::update()
{
    
}