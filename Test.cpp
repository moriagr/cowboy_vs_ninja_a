#include "doctest.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>

using namespace std;

#include "sources/Team.hpp" //no need for other includes

using namespace ariel;

TEST_CASE("Create Point and check the distance") {
    Point p1(2.5, 3.7);
    Point p2(4.2, 1.8);

    CHECK(p1.distance(p2) == 2.6023);

    Point p3 = p1.moveTowards(p1, p2, 1.5);
    CHECK(p3.distance(p2) == 1.5);
}

TEST_CASE("Position - Edge case") {
    Point p1(0.0, 0.0);
    Point p2(0.0, 0.0);

    CHECK(p1.distance(p2) == 0.0);

    CHECK_THROWS(p1.moveTowards(p1, p2, 5.0)); //  The biggest distance is 0 so we cant move between them.
}

TEST_CASE("Character - isAlive Ninja and Cowboy using hit") {
    Point a(32.3, 44), b(1.3, 3.5);

    Cowboy tom("Tom", a);

    YoungNinja john("John", Point(1.0, 2.0));
    TrainedNinja ninja("Ninja", Point(2.0, 5.0));
    OldNinja sam("Sam", b);

    CHECK(tom.isAlive() == true);
    CHECK(john.isAlive() == true);
    CHECK(sam.isAlive() == true);
    CHECK(ninja.isAlive() == true);

    CHECK_NOTHROW(tom.hit(110));
    john.hit(90);
    CHECK_THROWS(ninja.hit(130));// Have less than the given points.
    sam.hit(150);
    CHECK(john.isAlive() == true);
    CHECK(ninja.isAlive() == false);
}

TEST_CASE("Cowboy - shoot") {
    Cowboy cowboy("John", Point(1.0, 2.0));
    OldNinja enemy("Enemy", Point(3.0, 2.0));

    cowboy.shoot(&enemy);
    CHECK(enemy.isAlive() == false);
    CHECK(cowboy.hasboolets() == true);
}

TEST_CASE("Ninja - move") {
    YoungNinja ninja("John", Point(1.0, 1.0));
    TrainedNinja enemy("Enemy", Point(5.0, 5.0));

    ninja.move(&enemy);
    Point newLocation = ninja.getLocation();
    CHECK(newLocation.distance(enemy.getLocation()) == 5.0);
}

TEST_CASE("Ninja - slash") {
    OldNinja ninja("John", Point(1.0, 1.0));
    YoungNinja enemy("Enemy", Point(1.5, 1.5));

    ninja.slash(&enemy);
    CHECK(enemy.isAlive() == false);
}

TEST_CASE("TrainedNinja") {
    TrainedNinja trainedNinja("John", Point(1.0, 1.0));
    CHECK(trainedNinja.getName() == "John");
    CHECK(trainedNinja.isAlive() == true);
    CHECK(trainedNinja.distance(YoungNinja("Enemy", Point(3.0, 4.0)).getLocation()) == 3.6056);
}

TEST_CASE("OldNinja") {

    OldNinja oldNinja("John", Point(1.0, 1.0));
    CHECK(oldNinja.getName() == "John");
    CHECK(oldNinja.isAlive() == true);
    TrainedNinja enemy("Enemy", Point(5.0, 5.0));
    CHECK(oldNinja.distance(enemy.getLocation()) == 6.3246);
}

TEST_CASE("Cowboy") {

    Cowboy cowboy("John", Point(1.0, 1.0));
    CHECK(cowboy.getName() == "John");
    CHECK(cowboy.isAlive() == true);
    CHECK(cowboy.distance(YoungNinja("Enemy", Point(5.0, 5.0)).getLocation()) == 6.3246);
}

TEST_CASE("YoungNinja") {
    YoungNinja youngNinja("John", Point(1.0, 1.0));
    CHECK(youngNinja.getName() == "John");
    CHECK(youngNinja.isAlive() == true);
    CHECK(youngNinja.distance(Cowboy("Enemy", Point(2.0, 2.0)).getLocation()) == 1.4142);
}

TEST_CASE("Group - add") {
    Team team;
    Cowboy cowboy("John", Point(1.0, 1.0));
    YoungNinja ninja("Ryu", Point(2.0, 2.0));

    team.add(&cowboy);
    team.add(&ninja);

    CHECK((team.getGroup()).size() == 2);
}

TEST_CASE("Group - attack") {
    Team group1;
    Team group2;
    Cowboy cowboy1("John", Point(1.0, 1.0) );
    Cowboy cowboy2("Jane", Point(2.0, 2.0));
    OldNinja ninja1("Ryu", Point(3.0, 3.0));
    TrainedNinja ninja2("Ken", Point(4.0, 4.0));
    YoungNinja ninja3("Sam", Point(4.0, 4.0));

    group1.add(&cowboy1);
    group1.add(&ninja1);
    group1.add(&ninja3);

    group2.add(&cowboy2);
    group2.add(&ninja2);

    group1.attack(&group2);

    CHECK((group1.getGroup()).size() == 3);
    CHECK((group2.getGroup()).size() == 2);
}

TEST_CASE("Group - isAlive") {
    Team group;
    Cowboy cowboy("John", Point(1.0, 1.0));
    OldNinja ninja("Ryu", Point(2.0, 2.0));

    group.add(&cowboy);
    group.add(&ninja);

    CHECK(group.stillAlive() == 2);

    cowboy.hit(110);
    ninja.hit(150);

    CHECK(group.stillAlive() == 0);
}

TEST_CASE("Group - print") {
    Team group;
    Cowboy cowboy("John", Point(1.0, 1.0));
    YoungNinja ninja("Ryu", Point(2.0, 2.0));
//    TrainedNinja trainedNinja("Sam", Point(3.0, 3.0));

    group.add(&ninja);
    group.add(&cowboy);

    stringstream buffer;
    streambuf* old = std::cout.rdbuf(buffer.rdbuf());

    group.print();

    string output = buffer.str();
    string expectedOutput = "C John: HP: 110, Location: (1, 1)\nN Ryu: HP: 100, Location: (2, 2)\n";

    CHECK(output == expectedOutput);

    cout.rdbuf(old);
}

TEST_CASE("Group - print") {
    Team2 group;
    Cowboy cowboy("John", Point(1.0, 1.0));
    YoungNinja ninja("Ryu", Point(2.0, 2.0));
//    TrainedNinja trainedNinja("Sam", Point(3.0, 3.0));

    group.add(&ninja);
    group.add(&cowboy);

    stringstream buffer;
    streambuf* old = std::cout.rdbuf(buffer.rdbuf());

    group.print();

    string output = buffer.str();
    string expectedOutput = "N Ryu: HP: 100, Location: (2, 2)\nC John: HP: 110, Location: (1, 1)\n";

    CHECK(output == expectedOutput);

    cout.rdbuf(old);
}