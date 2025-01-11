// ex_3.cpp -- program to check string for palindrome

#include <iostream>

#include "../Config.h"

#include "ConfigEx_3.h"

#include "is_palindrom/is_palindrom.h"

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

		char str[ConfigEx_3::SIZE];

		std::cout << "Now please enter the line that interests you:" << " ";
		std::cin >> str;

		std::cout << "You entered:" << " " << str << std::endl;

		std::cout << "Your string - is" << " ";
		std::cout << (is_palindrom(str) ? "palindrom" : "not palindrom");
		std::cout << "!";
		std::cout << std::endl;


		std::cout << std::endl << std::endl;
	}
}