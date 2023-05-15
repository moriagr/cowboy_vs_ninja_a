//
// Created by moria on 5/3/23.
//

#include "Point.hpp"

namespace ariel {
    Point::Point(float myX, float myY) {
        this->x = myX;
        this->y = myY;
    }

    Point::Point() {}

    float Point::getX() const {
        return this->x;
    }

    float Point::getY() const {
        return this->y;
    }

    void Point::setX(float myX) {
        this->x = myX;
    }

    void Point::setY(float myY) {
        this->y = myY;
    }

    float Point::distance(Point other) {
        return 0.0;
    }

    void Point::print() {

    }

    Point Point::moveTowards(Point origin, Point destination, float distance) {
        return origin;
    }


};
