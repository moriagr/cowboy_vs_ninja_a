//
// Created by moria on 5/3/23.
//

#include "Team.hpp"

namespace ariel {
    Team2::Team2(Character *leader_):Team(leader_) {
    }

    Team2::Team2():Team(){

    }

    Team2::~Team2(){

    }

    // Define copy constructor
    Team2::Team2(const Team2& other){

    }

    // Define copy assignment operator
    Team2 &Team2::operator=(const Team2& other){
        return *this;
    }

    // Define move constructor
    Team2::Team2(Team2&& other) noexcept: Team2(other.getLeader()){

    }

    // Define move assignment operator
    Team2 &Team2::operator=(Team2&& other) noexcept{
        return *this;
    }

    void Team2::attack(Team *team) {

    }

    void Team2::print() const{
//        cout << this->leader->getName() << endl;

    }
} // ariel