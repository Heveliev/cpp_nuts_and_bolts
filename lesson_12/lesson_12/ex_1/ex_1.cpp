// ex_1.cpp -- program for sorting array (by bubble algorithm)

#include <iostream>

#include "../Config.h"

#include "../algorithms/algorithms.h"


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
		std::cout << std::endl;



		std::cout << "Check for increase:" << std::endl;
		for (int i = 0; i < (Config::SIZE / 2); i++)
		{
			int arr[Config::SIZE];
			std::copy(Config::unsorted_arrays[i], Config::unsorted_arrays[i] + Config::COLUMNS, arr);

			std::cout << (i + 1) << " " << "array:" << std::endl;

			std::cout << "Unsort:" << std::endl;
			for (int j = 0; j < Config::SIZE; j++)
			{
				std::cout << arr[j] << " ";
			}
			std::cout << std::endl << std::endl;

			algorithms::bubble_sort(arr, Config::SIZE);

			std::cout << "Sort:" << std::endl;
			for (int j = 0; j < Config::SIZE; j++)
			{
				std::cout << arr[j] << " ";
			}
			std::cout << std::endl << std::endl;
		}
		std::cout << std::endl;


		std::cout << "Check for decreasing:" << std::endl;
		for (int i = 0; i < (Config::SIZE / 2); i++)
		{
			int arr[Config::SIZE];
			std::copy(Config::unsorted_arrays[i], Config::unsorted_arrays[i] + Config::COLUMNS, arr);

			std::cout << (i + 1) << " " << "array:" << std::endl;

			std::cout << "Unsort:" << std::endl;
			for (int j = 0; j < Config::SIZE; j++)
			{
				std::cout << arr[j] << " ";
			}
			std::cout << std::endl << std::endl;

			algorithms::bubble_sort(arr, Config::SIZE, Sort::SortingDirection::descending);

			std::cout << "Sort:" << std::endl;
			for (int j = 0; j < Config::SIZE; j++)
			{
				std::cout << arr[j] << " ";
			}
			std::cout << std::endl << std::endl;
		}
		std::cout << std::endl;

		std::cout << std::endl << std::endl;
	}
}