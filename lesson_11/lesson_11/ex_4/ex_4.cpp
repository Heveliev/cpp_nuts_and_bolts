// ex_4.cpp -- program for enumerating elements of a two-dimensional array in a non-standard way 
// described in the document "ex_4_description.md"

#include <iostream>

#include "../Config.h"

#include "traverse_array_ex4/traverse_array_ex4.h"

void ex_4()
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

		std::cout << "Traverse small array:" << std::endl;
		traverse_array_ex4(Config::small_2d_array);
		std::cout << std::endl;

		std::cout << "Traverse big array:" << std::endl;
		traverse_array_ex4(Config::unsorted_arrays);
		std::cout << std::endl;

		std::cout << std::endl << std::endl;
	}
}