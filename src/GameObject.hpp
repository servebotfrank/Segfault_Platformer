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
        

    private:
        sf::Texture _texture;
        sf::Sprite _sprite;
        sf::Vector2<double> _position;
        double _width;
        double _height;
};

#endif