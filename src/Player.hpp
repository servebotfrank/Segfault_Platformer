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

class Player : public GameObject{

    public:
        Player(
            const sf::Texture & texture,
            const sf::Vector2f & position,
            const sf::Vector2f & velocity,
            const sf::Vector2f & size,
            bool isStatic);

        //MEMBER FUNCTIONS
        void update();
        void drawTo(sf::RenderWindow &window);
        void setPos(sf::Vector2f newPos);

        //MOVEMENT FUNCTIONS
        void moveLeft();
        void moveRight();
        void Jump();

        
    private:
    sf::RectangleShape _player;
    sf::Vector2f _source;
    sf::Sprite _sprite;
    enum _direction{Left, Right};

    float _speed;



};

#endif