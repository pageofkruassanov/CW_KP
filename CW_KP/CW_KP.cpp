#include <iostream>
#include "AreaCalculator.h"
#include "CircleAreaCalculator.h"
#include "RectangleAreaCalculator.h"
#include "Shape.h"
#include "TriangleAreaCalculator.h"
#include "Rhombus.h"

int main()
{
    RectangleAreaCalculator rectangleCalculator(4, 5);
    TriangleAreaCalculator triangleCalculator(3, 6);
    CircleAreaCalculator circleCalculator(2);
    Rhombus rhombusCalculator(5, 10);

    Shape rectangle(&rectangleCalculator);
    Shape triangle(&triangleCalculator);
    Shape circle(&circleCalculator);
    Shape rhombus(&rhombusCalculator);

    std::cout << "Rectangle Area: " << rectangle.calculateArea() << std::endl;
    std::cout << "Triangle Area: " << triangle.calculateArea() << std::endl;
    std::cout << "Circle Area: " << circle.calculateArea() << std::endl;
    std::cout << "Rhombus Area: " << rhombus.calculateArea() << std::endl;

    return 0;
}