// ex_5.cpp -- program to check if an array is sorted by a given value (descending/ascending)

#include <iostream>

#include "../Config.h"

#include "SortingDirection.h"

#include "is_sorted_modified/is_sorted_modified.h"

void ex_5()
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

		std::cout << "Unsorted arrays(check for increase):" << std::endl;
		for (int i = 0; i < (Config::SIZE / 2); i++)
		{
			std::cout << (i + 1) << " " << "array:" << std::endl;
			std::cout << "Array" << " ";
			std::cout << (is_sorted_modified(Config::unsorted_arrays[i], Config::SIZE, SortingDirection::ascending) ? "sorted" : "not sorted");
			std::cout << " " << "in ascending order." << std::endl;
		}
		std::cout << std::endl;

		std::cout << "Unsorted arrays(check for decreasing):" << std::endl;
		for (int i = 0; i < (Config::SIZE / 2); i++)
		{
			std::cout << (i + 1) << " " << "array:" << std::endl;
			std::cout << "Array" << " ";
			std::cout << (is_sorted_modified(Config::unsorted_arrays[i], Config::SIZE, SortingDirection::descending) ? "sorted" : "not sorted");
			std::cout << " " << "in descending order." << std::endl;
		}
		std::cout << std::endl;


		std::cout << "Sorted arrays(check for increase):" << std::endl;
		for (int i = 0; i < (Config::SIZE / 2); i++)
		{
			std::cout << (i + 1) << " " << "array:" << std::endl;
			std::cout << "Array" << " ";
			std::cout << (is_sorted_modified(Config::sorted_array[i * 2], Config::SIZE, SortingDirection::ascending) ? "sorted" : "not sorted");
			std::cout << " " << "in ascending order." << std::endl;
		}
		std::cout << std::endl;

		std::cout << "Sorted arrays(check for decreasing):" << std::endl;
		for (int i = 0; i < (Config::SIZE / 2); i++)
		{
			std::cout << (i + 1) << " " << "array:" << std::endl;
			std::cout << "Array" << " ";
			std::cout << (is_sorted_modified(Config::sorted_array[i * 2], Config::SIZE, SortingDirection::descending) ? "sorted" : "not sorted");
			std::cout << " " << "in descending order." << std::endl;
		}
		std::cout << std::endl;


		std::cout << std::endl << std::endl;
	}
}