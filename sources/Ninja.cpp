//
// Created by moria on 5/3/23.
//

#include "Ninja.hpp"

namespace ariel {
    Ninja::Ninja(int speed_, int hit_num_, string name_, Point location_) : speed(speed_),
                                                                            Character(hit_num_, location_, name_) {
    }

    Ninja::Ninja(){}

    Ninja::~Ninja(){}

    // Define copy constructor
    Ninja::Ninja(const Ninja& other){}

    // Define copy assignment operator
    Ninja &Ninja::operator=(const Ninja& other){
        return *this;
    }

    // Define move constructor
    Ninja::Ninja(Ninja&& other) noexcept{}

    // Define move assignment operator
    Ninja &Ninja::operator=(Ninja&& other) noexcept{
        return  *this;
    }

    void Ninja::move(Character *other) {

    }

    void Ninja::slash(Character *other) {

    }
    string Ninja::print(){
        return "";
    }
} // ariel