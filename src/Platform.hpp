// Platform Header File
// Last Edited: April 12th, 2019
// Edited by Kim F.
//
//  The Platform Class is a derived class of the GameObject class
//      representing a platform that the player can land and move along.
//      Some platforms can move.
//      This class features ...
//      1. Velocity
//      2. A bool that determines if it can move
//      3. An endpoint to move to and from the intial position
//      4. Its own unique update function

#ifndef PLATFORM_HPP
#define PLATFORM_HPP

#include "GameObject.hpp"


class Platform : GameObject{
    Platform(const std::string & textureLocation, sf::Vector2<double> & position, sf::Vector2<double> & velocity, bool & canMove);

    //ACCESSORS
    sf::Vector2<double> getVelocity();
    sf::Vector2<double> getEndPoint();
    bool isMovable();

    //MUTATORS
    void setVelocity(sf::Vector2<double> & newVelocity);
    void setEndPoint(sf::Vector2<double> newEndPoint);
    void changeIfMovable();

    //MEMBER FUNCTIONS
    void update();

    private:
        sf::Vector2<double> _velocity;
        sf::Vector2<double> _endPoint;
        bool _canMove;
};

#endif