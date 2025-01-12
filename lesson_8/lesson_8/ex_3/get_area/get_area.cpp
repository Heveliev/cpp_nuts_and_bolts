// get_area.cpp -- formulas for calculating the area of a circle

#include <numbers>

double get_area(double radius)
{
	return std::numbers::pi * (radius * radius);
}