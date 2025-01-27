// ex_2.cpp -- program to check if an array is sorted in ascending order

#include <iostream>

#include "../Config.h"

#include "is_sorted/is_sorted.h"

void ex_2()
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

		std::cout << "Unsorted arrays:" << std::endl;
		for (int i = 0; i < (Config::SIZE / 2); i++)
		{
			std::cout << (i + 1) << " " << "array:" << std::endl;
			std::cout << "Array" << " ";
			std::cout << (is_sorted(Config::unsorted_arrays[i], Config::SIZE) ? "sorted" : "not sorted");
			std::cout << " " << "in ascending order." << std::endl;
		}
		std::cout << std::endl;


		std::cout << "Sorted arrays:" << std::endl;
		for (int i = 0; i < (Config::SIZE / 2); i++)
		{
			std::cout << (i + 1) << " " << "array:" << std::endl;
			std::cout << "Array" << " ";
			std::cout << (is_sorted(Config::sorted_array[i * 2], Config::SIZE) ? "sorted" : "not sorted");
			std::cout << " " << "in ascending order." << std::endl;
		}
		std::cout << std::endl;

		std::cout << std::endl << std::endl;
	}
}