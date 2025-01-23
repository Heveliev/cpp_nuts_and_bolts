// ex_1.cpp -- program to swap two values using a pointer and using a reference

#include <iostream>

#include "../Config.h"

#include "swap/swap.h"

void ex_1()
{
	while (true)
	{
		int program_status = Config::END_PROGRAM;

		std::cout << "Please enter the" << " " << Config::START_PROGRAM
			<< " " << "to start program" << "(" << Config::END_PROGRAM
			<< " " << "for exit):" << " ";
		std::cin >> program_status;

		if (program_status == Config::END_PROGRAM)
		{
			std::cout << "You entered" << " " << program_status
				<< "," << " " << "the program closes." << std::endl;
			std::cout << "GG!" << std::endl;
			break;
		}

		if (program_status != Config::START_PROGRAM)
		{
			std::cout << "You entered" << " " << program_status
				<< " " << "this is not a valid value." << std::endl;
			std::cout << "Try again!" << std::endl;
			continue;
		}



		int x = 0;
		int y = 0;

		std::cout << "Please enter 2 numbers:" << std::endl;

		std::cout << "x =" << " ";
		std::cin >> x;

		std::cout << "y =" << " ";
		std::cin >> y;

		std::cout << "Using a pointer:" << std::endl;
		ptr::swap(&x, &y);
		std::cout << "Result:" << std::endl;
		std::cout << "x =" << " " << x << std::endl;
		std::cout << "y =" << " " << y << std::endl;

		std::cout << std::endl << std::endl;


		std::cout << "Using links:" << std::endl;
		link::swap(x, y);
		std::cout << "Result:" << std::endl;
		std::cout << "x =" << " " << x << std::endl;
		std::cout << "y =" << " " << y << std::endl;

		std::cout << std::endl << std::endl;



		std::cout << std::endl << std::endl;
	}
}