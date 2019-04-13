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



class GameObject{
    
    public:
        GameObject(const std::string & textureLocation, sf::Vector2<double> & position);

        //ACCESSORS
        sf::Vector2<double> getPosition();
        sf::Texture getTexture();
        sf::Sprite getSprite();

        //MUTATORS
        void setPosition(sf::Vector2<double> & newPosition);

        //MEMBER FUNCTIONS
        void loadTexture(const std::string & textureLocation);
        void createSprite();
        
        virtual void update();

    private:
        sf::Texture _texture;
        sf::Sprite _sprite;
        sf::Vector2<double> _position;
        double _width;
        double _height;
};

#endif