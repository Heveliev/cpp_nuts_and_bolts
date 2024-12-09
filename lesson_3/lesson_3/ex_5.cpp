// ex_5.cpp -- function to calculate the area and length of a circle


#include <iostream>

static void ex_5()
{
	const double PI = 3.14159265359;
	double radius, area, length;

	std::cout << "Please, enter the radius of the circle." << std::endl;
	std::cout << "radius =" << " ";
	std::cin >> radius;

	area = PI * (radius * radius);
	length = 2 * PI * radius;

	std::cout << "The area of your circle =" << " " << area << std::endl;
	std::cout << "The length of your circle =" << " " << length << std::endl;
}