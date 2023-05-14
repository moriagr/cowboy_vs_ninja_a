//
// Created by moria on 5/3/23.
//

#include "Team.hpp"

namespace ariel {
    SmartTeam::SmartTeam(Character *leader_) : Team(leader_) {
    }

    SmartTeam::SmartTeam() : Team() {

    }

    SmartTeam::~SmartTeam() {

    }

    // Define copy constructor
    SmartTeam::SmartTeam(const SmartTeam &other) {}

    // Define copy assignment operator
    SmartTeam &SmartTeam::operator=(const SmartTeam &other) {
        return *this;
    }

    // Define move constructor
    SmartTeam::SmartTeam(SmartTeam &&other)noexcept {}

    // Define move assignment operator
    SmartTeam &SmartTeam::operator=(SmartTeam &&other) noexcept{
        return *this;
    }

    void SmartTeam::attack(Team *team) {}

    void SmartTeam::print() const {}

} // ariel