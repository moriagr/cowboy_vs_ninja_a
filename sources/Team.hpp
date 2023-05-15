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

    class Team {
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

        void attack(Team *team);

        int stillAlive() const;

        void print() const;

        Character *getLeader() const;

        vector<Character *> getGroup() const;
    };

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

        void attack(Team *team);

        void print() const;
    };

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

        void attack(Team *team);

        void print() const;
    };
}

#endif //COWBOY_VS_NINJA_A_TEAM_H
