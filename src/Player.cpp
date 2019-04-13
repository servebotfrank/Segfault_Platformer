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

Player::Player(const sf::Texture & texture, const sf::Vector2f & position, const sf::Vector2f & velocity, const sf::Vector2f & size, const  bool & isStatic) 
    :GameObject(texture, position, velocity, size, isStatic)
{   
}

//MEMBER FUNCTIONS
void Player::update()
{

}