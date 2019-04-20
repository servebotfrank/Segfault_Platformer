//File for physics related code prototypes for the new and improved SegFault

#ifndef PHYSICS_HPP
#define PHYSICS_HPP
#include <SFML/Graphics.hpp>



class Physics
{
private:
const double _pi, _frameRate;
const bool _isStatic;
sf::Vector2f _position, _velocity, _size;

public: 


Physics(const sf::Vector2f & position, const sf::Vector2f & velocity, const sf::Vector2f & size, bool isStatic);

sf::Vector2f getPosition() const;
sf::Vector2f getVelocity() const;
sf::Vector2f getSize() const;

void setPosition(sf::Vector2f pos);
void setVelocity(sf::Vector2f vel);

bool isGrounded();

};


















#endif