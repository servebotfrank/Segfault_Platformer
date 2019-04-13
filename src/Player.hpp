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
        Player(const std::string & textureLocation, const sf::Vector2f & position, const sf::Vector2f & velocity, const float & width, const float & height, const bool & isStatic);

        //MEMBER FUNCTIONS
        void update();
        
    private:


};

#endif