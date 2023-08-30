#pragma once
#include "AreaCalculator.h"
class TriangleAreaCalculator : public AreaCalculator {
private:
    double base;
    double height;

public:
    TriangleAreaCalculator(double b, double h) : base(b), height(h) {}

    double calculateArea() override {
        return 0.5 * base * height;
    }
};

