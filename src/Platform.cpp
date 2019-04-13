// Platform Source File
// Last Edited: April 12th, 2019
// Edited by Kim F.
//
//  The Platform Class is a derived class of the GameObject class
//      representing a platform that the player can land and move along.
//      Some platforms can move.
//      This class features ...
//      1. Velocity
//      2. A bool that determines if it can move
//      3. An endpoint to move to and from the intial position
//      4. Its own unique update function

#include "Platform.hpp"

Platform::Platform(const std::string & textureLocation, const sf::Vector2f & position, const sf::Vector2f & velocity,  const float & width, const float & height, const bool & isStatic) 
    : GameObject(textureLocation, position, velocity, width, height, isStatic)
{}

//ACCESSORS
sf::Vector2f Platform::getVelocity()
{
    return _velocity;
}

sf::Vector2f Platform::getEndPoint()
{
    return _endPoint;    
}



//MUTATORS
void Platform::setEndPoint(sf::Vector2f newEndPoint)
{
    _endPoint = newEndPoint;
}

void Platform::setVelocity(sf::Vector2f & newVelocity)
{
    _velocity = newVelocity;
}




//MEMBER FUNCTIONS
void Platform::update()
{

}