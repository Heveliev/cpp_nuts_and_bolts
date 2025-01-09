// ex_1.cpp -- 

#include <iostream>

#include "../Config.h"

void ex_1()
{
	while (true)
	{
		int start = 0;

		std::cout << "Please enter the start"
			<< "(" << Config::END_PROGRAM << " " << "for exit):" << " ";
		std::cin >> start;

		if (start == Config::END_PROGRAM)
		{
			std::cout << "You entered" << " " << start
				<< "," << " " << "the program closes." << std::endl;
			std::cout << "GG!" << std::endl;
			break;
		}

		if (start <= 0) {
			std::cout << "Negative or zero value is not allowed, please try again!" << std::endl << std::endl;
			continue;
		}



		std::cout << "You entered" << " " << start << " " << "start" << std::endl;
		std::cout << "Summary statistics:" << std::endl;
		std::cout << "*****************" << std::endl;
		std::cout << "*****************" << std::endl;

		std::cout << std::endl << std::endl;
	}
}