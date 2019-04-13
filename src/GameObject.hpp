// GameObject Header File
// Last Edited: April 12th, 2019
// Edited by Kim F.
//
//  The GameObject Class is an abstract class
//      representing a generalized game entity.
//      The things all gameobject will have are ...
//      1. A Sprite
//      2. Position
//      3. Width
//      4. Height
//      5. Unique update() function, to be called every frame

#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP
#include <SFML/Graphics.hpp>
#include <string>
#include "physics.hpp"


class GameObject{
    
    public:
        GameObject(const sf::Texture & texture, const sf::Vector2f & position, const sf::Vector2f & velocity, const sf::Vector2f & size, const bool & isStatic);
        virtual ~GameObject();
        //ACCESSORS
        sf::Vector2f getPosition();
        sf::Vector2f getVelocity();
        sf::Texture getTexture();
        sf::Sprite getSprite();



        //MUTATORS
        void setPosition(sf::Vector2f & newPosition);
        void setVelocity(sf::Vector2f & newVelocity);

        //MEMBER FUNCTIONS
        void createSprite(sf::Texture texture);
        
        virtual void update();



    private:
        sf::Sprite _sprite;
        sf::Vector2f _position;
        sf::Vector2f _velocity;
        float _width;
        float _height;
        Physics _physicsComponent;
};

#endif