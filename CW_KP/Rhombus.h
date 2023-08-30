#pragma once
#include "AreaCalculator.h"
class Rhombus : public AreaCalculator
{
	double a;
	double H;
public:
	Rhombus(double a, double H) : a{ a }, H{ H } {};

	double calculateArea() {
		return a * H;
	}
};

