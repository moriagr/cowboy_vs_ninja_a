//
// Created by moria on 5/3/23.
//

#ifndef COWBOY_VS_NINJA_A_TEAM2_H
#define COWBOY_VS_NINJA_A_TEAM2_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>

using namespace std;


#include "./Team.hpp"

namespace ariel {

    class Team2 : public Team {
    public:
        Team2(Character *leader_);
        Team2();
        ~Team2() override;

        // Define copy constructor
        Team2(const Team2& other);

        // Define copy assignment operator
        Team2& operator=(const Team2& other);

        // Define move constructor
        Team2(Team2&& other) noexcept;

        // Define move assignment operator
        Team2& operator=(Team2&& other) noexcept;

        void attack(Team *team) override;

        void print() const override ;
    };

} // ariel

#endif //COWBOY_VS_NINJA_A_TEAM2_H
