//File for physics related code definitions for the new and improved SegFault
#include "physics.hpp"

Physics::Physics(double xPosition, double yPosition, double xVelocity, double yVelocity)
 : _xPosition{xPosition}, _yPosition{yPosition}, _xVelocity{xVelocity}, _yVelocity{yVelocity}, _pi{3.1415926535897932384626}, _frameRate{60}
{}