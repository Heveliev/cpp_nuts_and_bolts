// ex_1.cpp --  program to take an array of numbers and convert negative ones to "0" and output

#include <iostream>

#include "../Config.h"

#include "ConfigEx_1.h"

#include "translate_array/translate_array.h"


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

		int number = 0;
		int array[ConfigEx_1::SIZE] = {};

		std::cout << "Now enter" << " " << ConfigEx_1::SIZE << " " << "numbers." << std::endl;

		for (int i = 0; i < ConfigEx_1::SIZE; i++)
		{
			std::cout << "Enter number: ";
			std::cin >> number;
			array[i] = number;
		}


		std::cout << "You entered:" << " ";  
		for (int i = 0; i < ConfigEx_1::SIZE; i++)
		{
			if (i == 0)
			{
				std::cout << "[" << " ";
			}

			std::cout << array[i];
			if (i < ConfigEx_1::SIZE - 1)
			{
				std::cout << ",";
			}
			std::cout << " ";

			if (i == ConfigEx_1::SIZE - 1)
			{
				std::cout << "]";
			}
		}
		std::cout << std::endl;

		translate_array(array, ConfigEx_1::SIZE);

		std::cout << "Final array with validation:" << " ";
		for (int i = 0; i < ConfigEx_1::SIZE; i++)
		{
			if (i == 0)
			{
				std::cout << "[" << " ";
			}

			std::cout << array[i];

			if (i < ConfigEx_1::SIZE - 1)
			{
				std::cout << ",";
			}

			std::cout << " ";

			if (i == ConfigEx_1::SIZE - 1)
			{
				std::cout << "]";
			}
		}
		std::cout << std::endl;

		std::cout << std::endl << std::endl;
	}
}