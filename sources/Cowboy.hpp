//
// Created by moria on 5/3/23.
//
#ifndef COWBOY_VS_NINJA_A_COWBOY_H
#define COWBOY_VS_NINJA_A_COWBOY_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>

using namespace std;

#include "Character.hpp"

namespace ariel {

    class Cowboy : public Character {

    private:
        int numOfBalls;
    public:
        Cowboy(string name, Point location);

//        Cowboy();

//        ~Cowboy();

        void shoot(Character *other);

        void reload();

        bool hasboolets();

        string print() override;

    };

} // ariel

#endif //COWBOY_VS_NINJA_A_COWBOY_H
