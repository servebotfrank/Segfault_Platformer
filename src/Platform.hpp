#ifndef PLATFORM_HPP
#define PLATFORM_HPP

#include "GameObject.hpp"


class Platform : GameObject{
    Platform(const std::string & textureLocation, sf::Vector2<double> & position, sf::Vector2<double> & velocity, bool & canMove);

    //ACCESSORS
    sf::Vector2<double> getVelocity();
    sf::Vector2<double> getEndPoint();
    bool isMovable();

    //MUTATORS
    void setVelocity(sf::Vector2<double> & newVelocity);
    void setEndPoint(sf::Vector2<double> newEndPoint);
    void changeIfMovable();

    //MEMBER FUNCTIONS
    void update();

    private:
        sf::Vector2<double> _velocity;
        sf::Vector2<double> _endPoint;
        bool _canMove;
};

#endif