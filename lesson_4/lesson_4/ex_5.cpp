// ex_5.cpp -- the smaller of the two

#include <iostream>

static void ex_5()
{
	int a, b, result;

	std::cout << "Please, enter 2 numbers." << std::endl;
	std::cout << "a =" << " ";
	std::cin >> a;
	std::cout << "b =" << " ";
	std::cin >> b;

	result = (a > b) ? b : a;

	std::cout << "The smallest number =" << " " << result << std::endl;
}