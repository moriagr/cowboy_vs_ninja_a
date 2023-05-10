//
// Created by moria on 5/3/23.
//

#ifndef COWBOY_VS_NINJA_A_NINJA_H
#define COWBOY_VS_NINJA_A_NINJA_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>

using namespace std;

#include "Ninja.hpp"
#include "Character.hpp"

namespace ariel {
    class Ninja : public Character {
    private:

        int speed;
    public:
        Ninja(int speed_, int hit_num_, string name_, Point location_);

        void move(Character *other);

        void slash(Character *other);

        string print();


    };
} // ariel

#endif //COWBOY_VS_NINJA_A_NINJA_H
