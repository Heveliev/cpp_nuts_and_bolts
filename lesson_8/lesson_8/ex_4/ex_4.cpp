// ex_4.cpp -- function to print N natural numbers in different ways

#include <iostream>

#include "../Config.h"

#include "print_natural_numbers_ascending/print_natural_numbers_ascending.h"
#include "print_natural_numbers_descending/print_natural_numbers_descending.h"
#include "print_natural_numbers_descending_recursive/print_natural_numbers_descending_recursive.h"

void ex_4()
{
	while (true)
	{
		int natural_number = 0;

		std::cout << "Please enter the natural numbers:"
			<< "(" << Config::END_PROGRAM << " " << "for exit):" << " ";
		std::cin >> natural_number;

		if (natural_number == Config::END_PROGRAM)
		{
			std::cout << "You entered" << " " << natural_number
				<< "," << " " << "the program closes." << std::endl;
			std::cout << "GG!" << std::endl;
			break;
		}

		if (natural_number <= 0) {
			std::cout << "Negative or zero value is not allowed, please try again!" << std::endl << std::endl;
			continue;
		}

		std::cout << "You entered" << " " << natural_number << std::endl;

		std::cout << "---------------------------------------------------------" << std::endl;

		std::cout << "Numbers from smallest to largest using a loop:" << std::endl;
		print_natural_numbers_ascending(natural_number);
		std::cout << std::endl;

		std::cout << "Numbers from largest to smallest using a loop:" << std::endl;
		print_natural_numbers_descending(natural_number);
		std::cout << std::endl;

		std::cout << "Numbers from largest to smallest using recursion:" << std::endl;
		print_natural_numbers_descending_recursive(natural_number);
		std::cout << std::endl;

		std::cout << "---------------------------------------------------------" << std::endl;

		std::cout << std::endl << std::endl;
	}
}