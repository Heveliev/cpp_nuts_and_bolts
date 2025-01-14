// ex_2.cpp -- program to find a specific number in an array

#include <iostream>

#include "../Config.h"

#include "ConfigEx_2.h"

#include "find/find.h"

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


		int number = 0;
		int array[ConfigEx_2::SIZE] = {};
		int number_to_find = 0;

		std::cout << "Now enter" << " " << ConfigEx_2::SIZE << " " << "numbers." << std::endl;

		for (int i = 0; i < ConfigEx_2::SIZE; i++)
		{
			std::cout << "Enter number: ";
			std::cin >> number;
			*(array + i) = number;
		}

		std::cout << "Enter the number you want to find:" << " ";
		std::cin >> number_to_find;


		std::cout << "You entered an array:" << " ";
		for (int i = 0; i < ConfigEx_2::SIZE; i++)
		{
			if (i == 0)
			{
				std::cout << "[" << " ";
			}

			std::cout << *(array + i);
			if (i < ConfigEx_2::SIZE - 1)
			{
				std::cout << ",";
			}
			std::cout << " ";

			if (i == ConfigEx_2::SIZE - 1)
			{
				std::cout << "]";
			}
		}
		std::cout << std::endl;

		std::cout << "Want to find:" << " " << number_to_find << std::endl;

		std::cout << std::endl;

		int result = find(array, ConfigEx_2::SIZE, number_to_find);

		std::cout << "Number" << " ";
		std::cout << (result ? "found" : "not found");
		std::cout << " " << "in array!" << std::endl;

		std::cout << std::endl << std::endl;
	}
}