// ex_1.cpp -- program to find a number in a two-dimensional array using linear search O(n*m)

#include <iostream>

#include "../Config.h"

#include "./find/find.h"

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

		int search = 3;


		std::cout << "First number:" << std::endl;
		std::cout << "The number" << " " << search << " ";
		std::cout << (find(Config::unsorted_arrays, search) ? "is" : "is not");
		std::cout << " " << "in the array." << std::endl;


		search = 900;
		std::cout << "Second number:" << std::endl;
		std::cout << "The number" << " " << search << " ";
		std::cout << (find(Config::unsorted_arrays, search) ? "is" : "is not");
		std::cout << " " << "in the array." << std::endl;

		search = -1;
		std::cout << "Third number:" << std::endl;
		std::cout << "The number" << " " << search << " ";
		std::cout << (find(Config::unsorted_arrays, search) ? "is" : "is not");
		std::cout << " " << "in the array." << std::endl;

		search = -900;
		std::cout << "Fourth number:" << std::endl;
		std::cout << "The number" << " " << search << " ";
		std::cout << (find(Config::unsorted_arrays, search) ? "is" : "is not");
		std::cout << " " << "in the array." << std::endl;

		search = 101;
		std::cout << "Fifth number:" << std::endl;
		std::cout << "The number" << " " << search << " ";
		std::cout << (find(Config::unsorted_arrays, search) ? "is" : "is not");
		std::cout << " " << "in the array." << std::endl;
		

		std::cout << std::endl << std::endl;
	}
}