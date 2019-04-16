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
        GameObject(
            const sf::Texture & texture,
            const sf::Vector2f & position,
            const sf::Vector2f & velocity,
            const sf::Vector2f & size,
            bool isStatic);
        virtual ~GameObject()=default;
        //ACCESSORS
        sf::Vector2f getSize() const;
        sf::Vector2f getPosition() const;
        sf::Vector2f getVelocity() const;
        sf::Texture& getTextureRef();

        //MUTATORS
        void setPosition(const sf::Vector2f & newPosition);
        void setVelocity(const sf::Vector2f & newVelocity);

        //MEMBER FUNCTIONS
        virtual void update(float dt) {}
        virtual void draw(sf::RenderWindow& context) {}
    private:
        sf::Texture _texture;
        Physics _physicsComponent;
};

#endif