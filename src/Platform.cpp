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