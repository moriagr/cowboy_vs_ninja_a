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

        Ninja();

        void move(Character *other);

        void slash(Character *other);

        string print() override;

        // Define copy constructor
        Ninja(const Ninja& other);

        // Define copy assignment operator
        Ninja& operator=(const Ninja& other);

        // Define move constructor
        Ninja(Ninja&& other) noexcept;

        // Define move assignment operator
        Ninja& operator=(Ninja&& other) noexcept;

        ~Ninja() override;


    };
} // ariel

#endif //COWBOY_VS_NINJA_A_NINJA_H
