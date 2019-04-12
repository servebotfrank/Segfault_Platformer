// GameObject Source File
// April 11th, 2019
//  The GameObject Class is an abstract class
//      representing a generalized game entity.
//      The things all gameobject will have are ...
//      1. A Sprite
//      2. Position
//      3. Width
//      4. Height

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