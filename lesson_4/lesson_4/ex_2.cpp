// ex_2.cpp -- function that checks whether the entered number is divisible by 5 and 11 simultaneously without a remainder

#include <iostream>

static void ex_2()
{
	int a, b, c;

	a = 5;
	b = 11;

	std::cout << "There are 2 numbers, a = 5, b = 11." << std::endl;
	std::cout << "Please enter any number to check if it is divisible without remainder by both a and b:" << std::endl;
	std::cout << "c =" << " ";
	std::cin >> c;

	if ((c % a == 0) && (c % b == 0))
	{
		std::cout << "Yes!";
	}
	else
	{
		std::cout << "No!";
	}

}