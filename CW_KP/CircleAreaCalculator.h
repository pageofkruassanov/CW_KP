#pragma once
#include "AreaCalculator.h"
class CircleAreaCalculator : public AreaCalculator {
private:
    double radius;

public:
    CircleAreaCalculator(double r) : radius(r) {}

    double calculateArea() override {
        return 3.14159 * radius * radius;
    }
};

