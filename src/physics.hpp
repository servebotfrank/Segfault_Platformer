//File for physics related code prototypes for the new and improved SegFault

#ifndef PHYSICS_HPP
#define PHYSICS_HPP
#include <SFML/Graphics.hpp>



class Physics
{
private:
double _xVelocity, _yVelocity, _xPosition, _yPosition;
const double _pi, _frameRate;
const bool _isStatic;
sf::Vector2f _position, _velocity, _size;

public: 


Physics(const sf::Vector2f & position, const sf::Vector2f & velocity, const sf::Vector2f & size, const bool & isStatic);




};


















#endif