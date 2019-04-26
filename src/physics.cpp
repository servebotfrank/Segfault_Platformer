//File for physics related code definitions for the new and improved SegFault
#include "physics.hpp"

//NOTE FROM KIM:
//  Vector2f is equivalent to Vector2<float> in sfml, just easier to write
Physics::Physics(const sf::Vector2f & position, const sf::Vector2f & velocity, const sf::Vector2f & size, bool isStatic)
 : _position(position), _velocity(velocity), _size(size), _isStatic(isStatic), _pi{3.1415926535897932384626}, _frameRate{60}
{}

sf::Vector2f Physics::getPosition() const
{
    return _position;
}
sf::Vector2f Physics::getVelocity() const
{
    return _velocity;
}
sf::Vector2f Physics::getSize() const
{
    return _size;
}
void Physics::setPosition(sf::Vector2f pos)
{
	_position = pos;
}
void Physics::setVelocity(sf::Vector2f vel)
{
	_velocity = vel;
}

bool Physics::isGrounded()
{
	return true;
}

bool Physics::collision(const Physics & other)
{
	return _position.x + _size.x/2.0 > other.getPosition().x - other.getSize().x/2.0 &&
	 _position.x + _size.x/2.0 < other.getPosition().x + other.getSize().x/2 && 
	 _position.y - _size.y/2.0 > other.getPosition().y + other.getSize().y/2 &&
	 _position.y + _size.y/2.0 < other.getPosition().y - other.getSize().y/2;
}

// if(rectOneRight > rectTwoLeft && rectOneLeft < rectTwoRight && rectOneBottom > rectTwoTop && rectOneTop < rectTwoBottom)