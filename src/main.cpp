// main.cpp

#include "PlatformerGame.hpp"

#include <iostream>
using std::cerr;
using std::endl;
using std::exception;

int main()
{
    try {
        PlatformerGame game("");
        game.run();
    } catch (exception& e) {
        cerr << "Error::" << e.what() << endl;
    }

    return 0;
}