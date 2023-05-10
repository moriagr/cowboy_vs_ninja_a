//
// Created by moria on 5/3/23.
//

#ifndef COWBOY_VS_NINJA_A_TRAINEDNINJA_H
#define COWBOY_VS_NINJA_A_TRAINEDNINJA_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>

using namespace std;

#include "Ninja.hpp"

namespace ariel {

    class TrainedNinja : public Ninja {
    public:
        TrainedNinja(string name, Point location);
    };

} // ariel

#endif //COWBOY_VS_NINJA_A_TRAINEDNINJA_H
