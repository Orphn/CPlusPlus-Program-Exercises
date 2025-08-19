#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"
#include <cmath>

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }
};

#endif