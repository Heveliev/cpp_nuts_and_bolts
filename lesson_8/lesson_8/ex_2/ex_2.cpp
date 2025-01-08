// ex_2.cpp -- calculating factorial

#include <iostream>

#include "../Config.h"

#include "factorial_using_loop/factorial_using_loop.h"
#include "factorial_using_recursion/factorial_using_recursion.h"
#include "factorial_using_recursion_reverse/factorial_using_recursion_reverse.h"


void ex_2()
{
	while (true)
	{
		int factorial = 0;

		std::cout << "Please, enter the number factorial"
			<< "(" << Config::END_PROGRAM << " " << "for exit):" << " ";
		std::cin >> factorial;

		if (factorial == Config::END_PROGRAM)
		{
			std::cout << "You entered" << " " << factorial
				<< "," << " " << "the program closes." << std::endl;
			std::cout << "GG!" << std::endl;
			break;
		}

		if (factorial <= 0) {
			std::cout << "Negative or zero value is not allowed, please try again!" << std::endl << std::endl;
			continue;
		}

		std::cout << "You entered" << " " << factorial << "!" << std::endl;

		std::cout << "---------------------------------------------------------" << std::endl;

		std::cout << "Calculates the value of the factorial using a loop:" << std::endl;
		std:: cout << "Total:" << " " << factorial_using_loop(factorial) << std::endl;

		std::cout << "Calculates the value of the factorial using recursion:" << std::endl;
		std::cout << "Total:" << " " << factorial_using_recursion(factorial) << std::endl;

		std::cout << "Calculates the value of the factorial from smallest to largest using recursion:" << std::endl;
		std::cout << "Total:" << " " << factorial_using_recursion_reverse(factorial) << std::endl;

		std::cout << "---------------------------------------------------------" << std::endl;

		std::cout << std::endl << std::endl;
	}
}