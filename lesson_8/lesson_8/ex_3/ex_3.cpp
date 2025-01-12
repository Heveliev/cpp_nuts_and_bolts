// ex_3.cpp -- function to calculate the area and length of a circle

#include <iostream>

#include "../Config.h"

#include "get_area/get_area.h"
#include "get_circumference/get_circumference.h"

void ex_3()
{
	while (true)
	{
		double radius = 0;
		
		std::cout << "Please enter the radius of the circle:"
			<< "(" << Config::END_PROGRAM << " " << "for exit):" << " ";
		std::cin >> radius;

		if (radius == Config::END_PROGRAM)
		{
			std::cout << "You entered" << " " << radius
				<< "," << " " << "the program closes." << std::endl;
			std::cout << "GG!" << std::endl;
			break;
		}

		if (radius <= 0) {
			std::cout << "Negative or zero value is not allowed, please try again!" << std::endl << std::endl;
			continue;
		}

		std::cout << "You entered" << " " << radius << std::endl;

		std::cout << "---------------------------------------------------------" << std::endl;

		std::cout << "Area of a circle =" << " " << get_area(radius) << std::endl;

		std::cout << "Length of a circle =" << " " << get_circumference(radius) << std::endl;

		std::cout << "---------------------------------------------------------" << std::endl;

		std::cout << std::endl << std::endl;
	}
}