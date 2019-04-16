// Platform Source File
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

#include "Platform.hpp"

Platform::Platform(
    const sf::Texture & texture,
    const sf::Vector2f & position,
    const sf::Vector2f & velocity,
    const sf::Vector2f & size,
    bool isStatic) : GameObject(texture, position, velocity, size, isStatic)
{
    for (size_t x = 0; x < size.x; ++x) {
        for (size_t y= 0; y < size.y; ++y) {
            sf::Sprite sprite(getTextureRef());
            auto currentPosition = getPosition();
            currentPosition.x += x*64;
            currentPosition.y += y*64;
            sprite.setPosition(currentPosition);
            _sprites.push_back(sprite);
        }
    }
}
void Platform::update(float dt)
{}
void Platform::draw(sf::RenderWindow& context)
{
    auto size = getSize();
    for (auto sprite: _sprites) {
        context.draw(sprite);
    }
}
