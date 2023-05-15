//
// Created by moria on 5/3/23.
//

#ifndef COWBOY_VS_NINJA_A_POINT_H
#define COWBOY_VS_NINJA_A_POINT_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>

using namespace std;

namespace ariel {

    class Point {
    private:
        float x;
        float y;

    public:
        Point(float myX, float myY);

        Point();

        float getX() const;

        float getY() const;

        void setX(float myX);

        void setY(float myY);

        float distance(Point other);

        void print();

        Point moveTowards(Point origin, Point destination, float distance);
    };

}

#endif //COWBOY_VS_NINJA_A_POINT_H
