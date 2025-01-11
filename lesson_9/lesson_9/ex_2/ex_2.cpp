// ex_2.cpp -- program to take a C type string and convert lowercase to uppercase if necessary

#include <iostream>

#include "../Config.h"

#include "ConfigEx_2.h"

#include "to_uppercase/to_uppercase.h"

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

		char str[ConfigEx_2::SIZE];

		std::cout << "Now please enter the line that interests you:" << " ";
		std::cin >> str;
		
		std::cout << "You entered:" << " " << str << std::endl;

		to_uppercase(str);

		std::cout << "Final array with validation:" << " " << str << std::endl;


		std::cout << std::endl << std::endl ;
	}
}