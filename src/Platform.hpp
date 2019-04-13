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


class Platform : public GameObject{
    Platform(const sf::Texture & texture, const sf::Vector2f & position, const sf::Vector2f & velocity, const sf::Vector2f & size,  const bool & isStatic);

    //ACCESSORS
    sf::Vector2f getVelocity();
    sf::Vector2f getEndPoint();
    bool isMovable();

    //MUTATORS
    void setVelocity(sf::Vector2f & newVelocity);
    void setEndPoint(sf::Vector2f newEndPoint);
    void changeIfMovable();

    //MEMBER FUNCTIONS
    void update();

    private:
        sf::Vector2f _velocity;
        sf::Vector2f _endPoint;
};

#endif