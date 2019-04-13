// Player source File
// Last Edited: April 12th, 2019
// Edited by Kim F.
//
//  The Player Class is a derived class of the GameObject class
//      representing a player that the user has control over
//      This class features ...
//      1. Velocity
//      2. Its own unique update function

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

//MEMBER FUNCTIONS
void Player::update()
{

}