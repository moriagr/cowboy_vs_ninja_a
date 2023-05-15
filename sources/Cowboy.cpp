//
// Created by moria on 5/3/23.
//

#include "Cowboy.hpp"

namespace ariel {
    Cowboy::Cowboy(string name, Point location) : Character(110, location, name) {

    }

    Cowboy::Cowboy() {

    }

    // Define copy constructor
    Cowboy::Cowboy(const Cowboy& other){}

    // Define copy assignment operator
    Cowboy &Cowboy::operator=(const Cowboy& other){
        return *this;
    }

    // Define move constructor
    Cowboy::Cowboy(Cowboy&& other) noexcept{}

    // Define move assignment operator
    Cowboy &Cowboy::operator=(Cowboy&& other) noexcept{
        return *this;
    }

    Cowboy::~Cowboy(){}

    void Cowboy::shoot(Character *other) {

    }

    void Cowboy::reload() {

    }

    bool Cowboy::hasboolets() {
        return false;
    }

    string Cowboy::print(){
        return "";
    }


} // ariel