// ex_4.cpp -- function to calculate the perimeter and area of ​​a rectangle

#include <iostream>

static void ex_4()
{
	double width, height, perimetr, area;
	
	std::cout << "Please, enter the width and height of your rectangle." << std::endl;
	std::cout << "width =" << " ";
	std::cin >> width;
	std::cout << "height =" << " ";
	std::cin >> height;

	perimetr = (width + height) * 2;
	area = width * height;

	std::cout << "The perimetr of your rectangle =" << " " << perimetr << std::endl;
	std::cout << "The area of your rectangle =" << " " << area << std::endl;
}