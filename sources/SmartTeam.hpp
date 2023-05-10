//
// Created by moria on 5/3/23.
//

#ifndef COWBOY_VS_NINJA_A_SMARTTEAM_H
#define COWBOY_VS_NINJA_A_SMARTTEAM_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>

using namespace std;

#include "./Team.hpp"

namespace ariel {

    class SmartTeam : public Team {
    public:
        SmartTeam(Character *leader_);

        SmartTeam();

        ~SmartTeam() override;

        // Define copy constructor
        SmartTeam(const SmartTeam &other);

        // Define copy assignment operator
        SmartTeam &operator=(const SmartTeam &other);

        // Define move constructor
        SmartTeam(SmartTeam &&other)  noexcept;

        // Define move assignment operator
        SmartTeam &operator=(SmartTeam &&other) noexcept;

        void attack(Team *team) override;

        void print() const override;


    };

} // ariel

#endif //COWBOY_VS_NINJA_A_SMARTTEAM_H
