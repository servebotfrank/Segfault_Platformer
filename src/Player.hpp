// Player Header File
// Last Edited: April 12th, 2019
// Edited by Kim F.
//
//  The Player Class is a derived class of the GameObject class
//      representing a player that the user has control over
//      This class features ...
//      1. Velocity
//      2. Its own unique update function

#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "GameObject.hpp"

class Player : GameObject{

    public:
        Player(const std::string & textureLocation, sf::Vector2<double> & position, sf::Vector2<double> & velocity);

        //ACCESSORS
        sf::Vector2<double> getVelocity();
        
        //MUTATORS
        void setVelocity(sf::Vector2<double> & newVelocity);

        //MEMBER FUNCTIONS
        void update();
        
    private:
        sf::Vector2<double> _velocity;

};

#endif