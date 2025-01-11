// ex_4.cpp -- program for counting vowels and consonants in a string

#include <iostream>

#include "../Config.h"

#include "ConfigEx_4.h"

#include "../ex_2/to_uppercase/to_uppercase.h"

#include "parse_string_letters/parse_string_letters.h"

void ex_4()
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

		char str[ConfigEx_4::SIZE];

		int vowels_count = 0, constonants_count = 0;

		std::cout << "Now please enter the line that interests you:" << " ";
		std::cin >> str;

		std::cout << "You entered:" << " " << str << std::endl;

		to_uppercase(str);

		std::cout << std::endl;

		parse_string_letters(str, vowels_count, constonants_count);

		std::cout << "Summary statistics:" << std::endl;
		std::cout << "*****************" << std::endl;
		std::cout << "Vowels:" << " " << vowels_count << std::endl;
		std::cout << "Constonants:" << " " << constonants_count << std::endl;
		std::cout << "*****************" << std::endl;

		std::cout << std::endl << std::endl;
	}
}