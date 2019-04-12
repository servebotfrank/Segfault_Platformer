#include "Player.hpp"

Player::Player(const std::string & textureLocation, sf::Vector2<double> & position, sf::Vector2<double> & velocity) :GameObject(textureLocation, position), _velocity(velocity)
{   
}

void Player::setVelocity(sf::Vector2<double> & newVelocity)
{
    _velocity = newVelocity;
}

sf::Vector2<double> Player::getVelocity()
{
    return _velocity;
}

void Player::update()
{
    
}