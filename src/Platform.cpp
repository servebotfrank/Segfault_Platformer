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

Platform::Platform(const std::string & textureLocation, sf::Vector2<double> & position, sf::Vector2<double> & velocity, bool & canMove) 
    : GameObject(textureLocation, position), _velocity(velocity), _canMove(canMove)
{}

//ACCESSORS
sf::Vector2<double> Platform::getVelocity()
{
    return _velocity;
}

sf::Vector2<double> Platform::getEndPoint()
{
    return _endPoint;    
}

bool Platform::isMovable()
{
    return _canMove;
}

//MUTATORS
void Platform::setEndPoint(sf::Vector2<double> newEndPoint)
{
    _endPoint = newEndPoint;
}

void Platform::setVelocity(sf::Vector2<double> & newVelocity)
{
    _velocity = newVelocity;
}

void Platform::changeIfMovable()
{
    _canMove = !isMovable();
}


//MEMBER FUNCTIONS
void Platform::update()
{

}