// get_circumference.cpp -- formulas for calculating the length of a circle

#include <numbers>

double get_circumference(double radius)
{
	return (2* std::numbers::pi) * radius;
}