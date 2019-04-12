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

GameObject::GameObject(const std::string textureLocation, double xPosition, double yPosition): _xPosition(_xPosition), _yPosition(_yPosition)
{
    loadTexture(textureLocation);
}

void GameObject::loadTexture(std::string textureLocation)
{
    if(!getTexture().loadFromFile(textureLocation))
    {
    }
}

sf::Texture GameObject::getTexture()
{
    return _texture;
}