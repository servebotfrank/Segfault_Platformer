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
    Platform(
        const sf::Texture & texture,
        const sf::Vector2f & position,
        const sf::Vector2f & velocity,
        const sf::Vector2f & size,
        bool isStatic);
    //ACCESSORS

    //MUTATORS

    //MEMBER FUNCTIONS
    void update(float dt) override;
    void draw(sf::RenderWindow& context) override;
private:
    std::vector<sf::Sprite> _sprites;
};

#endif