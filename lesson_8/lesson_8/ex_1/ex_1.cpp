// ex_1.cpp -- function to count the total number of negative/positive numbers and zeros

#include <iostream>

#include "../Config.h"

#include "counting_numbers.h"

void ex_1()
{
	while (true) 
	{
		int amount_numbers = 0;
		int negative = 0, positive = 0, zeroes = 0;

		std::cout << "Please enter the total amount of digits" 
			<< "(" << Config::END_PROGRAM << " " << "for exit):" << " ";
		std::cin >> amount_numbers;

		if (amount_numbers == Config::END_PROGRAM)
		{
			std::cout << "You entered" << " " << amount_numbers
				<< "," << " " << "the program closes." << std::endl;
			std::cout << "GG!" << std::endl;
			break;
		}

		if (amount_numbers <= 0) {
			std::cout << "Negative or zero value is not allowed, please try again!" << std::endl << std::endl;
			continue;
		}


		counting_numbers(amount_numbers, negative, positive, zeroes);
		

		std::cout << "You entered" << " " << amount_numbers << " " << "numbers." << std::endl;
		std::cout << "Summary statistics:" << std::endl;
		std::cout << "*****************" << std::endl;
		std::cout << "Negative:" << " " << negative << std::endl;
		std::cout << "Positive:" << " " << positive << std::endl;
		std::cout << "Zeroes:" << " " << zeroes << std::endl;
		std::cout << "*****************" << std::endl;

		std::cout << std::endl << std::endl;
	}
}