// ex_3.cpp -- program for checking the length and calculating the sum of array elements

#include <iostream>

#include "../Config.h"

#include "ConfigEx_3.h"

#include "calculate_sum/calculate_sum.h"

void ex_3()
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


		double number = 0.0;
		double array[ConfigEx_3::SIZE] = {};
		double sum = 0.0;

		std::cout << "Now enter" << " " << ConfigEx_3::SIZE << " " << "numbers." << std::endl;

		for (int i = 0; i < ConfigEx_3::SIZE; i++)
		{
			std::cout << "Enter number: ";
			std::cin >> number;
			*(array + i) = number;
		}
		std::cout << std::endl;


		std::cout << "You entered an array:" << " ";
		for (int i = 0; i < ConfigEx_3::SIZE; i++)
		{
			if (i == 0)
			{
				std::cout << "[" << " ";
			}

			std::cout << *(array + i);
			if (i < ConfigEx_3::SIZE - 1)
			{
				std::cout << ",";
			}
			std::cout << " ";

			if (i == ConfigEx_3::SIZE - 1)
			{
				std::cout << "]";
			}
		}
		std::cout << std::endl;


		int result = calculate_sum(array, ConfigEx_3::SIZE, sum);

		std::cout << "The array is" << " ";
		std::cout << (result ? "not" : "");
		std::cout << " " << "empty!" << std::endl;

		std::cout << "The sum of all elements of the array is:" << " " << sum << std::endl;

		std::cout << std::endl << std::endl;
	}
}