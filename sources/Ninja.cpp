//
// Created by moria on 5/3/23.
//

#include "Ninja.hpp"

namespace ariel {
    Ninja::Ninja(int speed_, int hit_num_, string name_, Point location_) : speed(speed_),
                                                                            Character(hit_num_, location_, name_) {
    }

    void Ninja::move(Character *other) {

    }

    void Ninja::slash(Character *other) {

    }
    string Ninja::print(){
        return "";
    }
} // ariel