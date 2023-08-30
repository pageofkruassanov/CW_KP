#pragma once
#include "AreaCalculator.h"
class Shape {
private:
    AreaCalculator* areaCalculator;

public:
    Shape(AreaCalculator* calculator) : areaCalculator(calculator) {}

    double calculateArea() {
        return areaCalculator->calculateArea();
    }
};

