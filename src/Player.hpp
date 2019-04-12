#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "GameObject.hpp"

class Player : GameObject{

    public:
        Player(const std::string & textureLocation, sf::Vector2<double> & position, sf::Vector2<double> & velocity);

        //ACCESSORS
        sf::Vector2<double> getVelocity();
        
        //MUTATORS
        void setVelocity(sf::Vector2<double> & newVelocity);

        //MEMBER FUNCTIONS

        
    private:
        sf::Vector2<double> _velocity;

};

#endif