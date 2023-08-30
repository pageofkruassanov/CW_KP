#pragma once
#include "AreaCalculator.h"
class RectangleAreaCalculator : public AreaCalculator {
private:
    double width;
    double height;

public:
    RectangleAreaCalculator(double w, double h) : width(w), height(h) {}

    double calculateArea() override {
        return width * height;
    }
};

