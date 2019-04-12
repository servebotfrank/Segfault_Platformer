#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP
#include <SFML/Graphics.hpp>
#include <string>
class GameObject{
    public:
GameObject(std::string textureLocation, double xPosition, double yPosition);
void loadTexture(const std::string textureLocation);
sf::Texture getTexture();
    private:
        sf::Texture _texture;
        sf::Sprite _sprite;
        double _xPosition;
        double _yPosition;
        double _width;
        double _height;
};

#endif