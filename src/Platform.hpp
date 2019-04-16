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
public:
    using GameObject::GameObject;

    //ACCESSORS

    //MUTATORS

    //MEMBER FUNCTIONS
    void update(float dt) override;
    void draw(const sf::Window& context) override;
private:

};

#endif