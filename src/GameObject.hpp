#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP
#include <SFML/Graphics.hpp>
#include <string>
class GameObject{
    public:
GameObject(const std::string & textureLocation, sf::Vector2<double> & position);
void loadTexture(const std::string & textureLocation);

//Accessors
sf::Vector2<double> getPosition();
void setPosition(sf::Vector2<double> & newPosition);
sf::Texture getTexture();

    private:
        sf::Texture _texture;
        sf::Sprite _sprite;
        sf::Vector2<double> _position;
        double _width;
        double _height;
};

#endif