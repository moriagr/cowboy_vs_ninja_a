//
// Created by moria on 5/3/23.
//

#include "Character.hpp"

namespace ariel {
    Character::Character(int hit_num_, Point location_, string name_) : location(location_), hit_num(hit_num_),
                                                                        name(name_) {

    }

    Character::~Character() {}

    // Define copy constructor
    Character::Character(const Character &other) : Character(other.hit_num, other.location, other.name) {

    }

    // Define copy assignment operator
    Character &Character::operator=(const Character &other){
        return *this;
    }

    // Define move constructor
    Character::Character(Character&& other) noexcept : location(other.location), hit_num(other.hit_num), name(std::move(other.name)) {

    }

    Character::Character(){}
// Define move assignment operator
    Character &Character::operator=(Character &&other) noexcept{
        return *this;

    }

    bool Character::isAlive() {
        return false;
    }

    double Character::distance(Point other) {
        return 0.0;
    }

    void Character::hit(int num) {}

    string Character::getName() const {
        return this->name;
    }

    Point Character::getLocation() const {
        return this->location;
    }

    int Character::getHitNum() const{
        return this->hit_num;
    }


//    string Character::print() {
//        return this->name;
//    }
} // ariel