//
// Created by moria on 5/3/23.
//

#include "Team.hpp"

namespace ariel {

    Team::Team(Character *leader_){
        this->leader = leader_;

    }

    Team::Team(){
        this->leader = NULL;

    }
    Team::~Team(){

    }

    // Define copy constructor
    Team::Team(const Team& other){

    }

    // Define copy assignment operator
    Team &Team::operator=(const Team& other){
        return *this;
    }

    // Define move constructor
    Team::Team(Team&& other) noexcept{

    }

    // Define move assignment operator
    Team &Team::operator=(Team&& other) noexcept{
        return *this;
    }


    void Team::add(Character * other){

    }

    Character* Team::getLeader() const{
        return this->leader;
    }

    void Team::attack(Team *team){

    }

    int Team::stillAlive() const {
        return 0;
    }


    vector<Character *> Team::getGroup() const{
        return group;
    }


void Team::print() const{
//        cout<<this->leader->getName()<<endl;
    }
}
