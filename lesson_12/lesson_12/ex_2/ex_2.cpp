// ex_2.cpp -- program for sorting a two-dimensional array by rows and by columns

#include <iostream>

#include "../Config.h"

#include "sort/sort.h"


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



		int arr[Config::ROWS][Config::COLUMNS];

		for (int i = 0; i < Config::ROWS; i++) {
			std::copy(Config::unsorted_arrays[i],
				Config::unsorted_arrays[i] + Config::COLUMNS,
				arr[i]);
		}

		std::cout << "Check for increase(by rows):" << std::endl;
		std::cout << "Unsort:" << std::endl;
		for (int i = 0; i < Config::SIZE; i++)
		{
			for (int j = 0; j < Config::SIZE; j++)
			{
				std::cout << arr[i][j] << " ";
			}
			std::cout << std::endl << std::endl;
		}
		std::cout << std::endl;

		sort(arr);

		std::cout << "Sort:" << std::endl;
		for (int i = 0; i < Config::SIZE; i++)
		{
			for (int j = 0; j < Config::SIZE; j++)
			{
				std::cout << arr[i][j] << " ";
			}
			std::cout << std::endl << std::endl;
		}
		std::cout << std::endl;

		sort(arr, Table::SortingDirection::by_rows, Sort::SortingDirection::descending);

		std::cout << "Check for decreasing(by rows):" << std::endl;
		std::cout << "Sort:" << std::endl;
		for (int i = 0; i < Config::SIZE; i++)
		{
			for (int j = 0; j < Config::SIZE; j++)
			{
				std::cout << arr[i][j] << " ";
			}
			std::cout << std::endl << std::endl;
		}
		std::cout << std::endl;



		for (int i = 0; i < Config::ROWS; i++) {
			std::copy(Config::unsorted_arrays[i],
				Config::unsorted_arrays[i] + Config::COLUMNS,
				arr[i]);
		}


		std::cout << "Check for increase(by columns):" << std::endl;
		std::cout << "Unsort:" << std::endl;
		for (int i = 0; i < Config::SIZE; i++)
		{
			for (int j = 0; j < Config::SIZE; j++)
			{
				std::cout << arr[i][j] << " ";
			}
			std::cout << std::endl << std::endl;
		}
		std::cout << std::endl;

		sort(arr, Table::SortingDirection::by_column);

		std::cout << "Sort:" << std::endl;
		for (int i = 0; i < Config::SIZE; i++)
		{
			for (int j = 0; j < Config::SIZE; j++)
			{
				std::cout << arr[i][j] << " ";
			}
			std::cout << std::endl << std::endl;
		}
		std::cout << std::endl;

		sort(arr, Table::SortingDirection::by_column, Sort::SortingDirection::descending);

		std::cout << "Check for decreasing(by column):" << std::endl;
		std::cout << "Sort:" << std::endl;
		for (int i = 0; i < Config::SIZE; i++)
		{
			for (int j = 0; j < Config::SIZE; j++)
			{
				std::cout << arr[i][j] << " ";
			}
			std::cout << std::endl << std::endl;
		}
		std::cout << std::endl;

		std::cout << std::endl << std::endl;
	}
}