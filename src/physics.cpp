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

bool Physics::isGrounded()const
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

void Physics::iteratePhysicsX(double frameRate)
{
	_lastPos = _position;

	_position.x += _velocity.x/frameRate;
}

void Physics::iteratePhysicsY(double frameRate)
{
	_lastPos = _position;

	_position.y+= _velocity.y/frameRate;
}

void Physics::fixCollisionX(const Physics & other)
{
	if(_velocity.x>0)
	{
		_position.x=other._position.x - other._size.x/2;
		_velocity.x = 0;
	}
	else 
	{
		_position.x=other._position.x + other._size.x/2;
		_velocity.x = 0;
	}
}

void Physics::fixCollisionY(const Physics & other)
{
	if(_velocity.y>0)
	{
		_position.y =other._position.y - other._size.y/2;
		_velocity.y = 0;
	}
	else 
	{
		_position.y =other._position.y + other._size.y/2;
		_velocity.y = 0;
	}
}