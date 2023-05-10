//
// Created by moria on 5/3/23.
//

#ifndef COWBOY_VS_NINJA_A_TEAM_H
#define COWBOY_VS_NINJA_A_TEAM_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>

using namespace std;

#include "./OldNinja.hpp"
#include "./YoungNinja.hpp"
#include "./TrainedNinja.hpp"
#include "./Cowboy.hpp"
#include <vector>

namespace ariel {

    struct Team {
    private:
        Character *leader;
        vector<Character *> group;
    public:
        Team(Character *leader_);

        Team();

        virtual ~Team();

        // Define copy constructor
        Team(const Team &other);

        // Define copy assignment operator
        Team &operator=(const Team &other);

        // Define move constructor
        Team(Team &&other) noexcept;

        // Define move assignment operator
        Team &operator=(Team &&other) noexcept;

        void add(Character *other);

        virtual void attack(Team *team);

        int stillAlive() const;

        virtual void print() const;

        Character *getLeader() const;
    };
}

#endif //COWBOY_VS_NINJA_A_TEAM_H
