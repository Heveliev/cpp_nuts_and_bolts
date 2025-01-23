// ex_5.cpp -- program for comparing strings

#include <iostream>

#include "../Config.h"

#include "ConfigEx_5.h"

#include "is_equal/is_equal.h"

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

		char first_str[ConfigEx_5::SIZE];
		char second_str[ConfigEx_5::SIZE];


		std::cout << "Enter the first line:" << " ";
		std::cin >> first_str;

		std::cout << "Enter the second line:" << " ";
		std::cin >> second_str;

		std::cout << "You entered:" << std::endl;
		std::cout << "First line:" << " " << first_str << std::endl;
		std::cout << "Second line:" << " " << second_str << std::endl;


		std::cout << "Your strings are" << " ";
		std::cout << (is_equal(first_str, second_str) ? ":)" : ":( not");
		std::cout << " " << "equal" << "!" << std::endl;

		std::cout << std::endl << std::endl;
	}
}