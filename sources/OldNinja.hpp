//
// Created by moria on 5/3/23.
//

#ifndef COWBOY_VS_NINJA_A_OLDNINJA_H
#define COWBOY_VS_NINJA_A_OLDNINJA_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>

using namespace std;

#include "Ninja.hpp"

namespace ariel {

    class OldNinja : public Ninja {
    public:
        OldNinja(string name, Point location);
    };

} // ariel

#endif //COWBOY_VS_NINJA_A_OLDNINJA_H
