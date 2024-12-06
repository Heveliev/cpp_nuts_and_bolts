// ex_3.cpp -- function for comparing numbers

#include <iostream>
#include <iomanip>

static void ex_3()
{
	int a, b;
	bool lessThan, equal, moreThan, lessOrEqual;

	std::cout << "Please, enter 2 numbers." << std::endl;
	std::cout << "a =" << " ";
	std::cin >> a;
	std::cout << "b =" << " ";
	std::cin >> b;

	lessThan = static_cast<bool>(a < b);
	equal = static_cast<bool>(a == b);
	moreThan = static_cast<bool>(a > b);
	lessOrEqual = static_cast<bool>(a <= b);

	std::cout << "a < b:" << " " << lessThan << std::endl;
	std::cout << "a == b:" << " " << equal << std::endl;
	std::cout << "a > b:" << " " << moreThan << std::endl;
	std::cout << "a <= b:" << " " << lessOrEqual << std::endl;

	std::cout << "a < b:" << " " << std::boolalpha << lessThan << std::endl;
	std::cout << "a == b:" << " " << std::boolalpha << equal << std::endl;
	std::cout << "a > b:" << " " << std::boolalpha << moreThan << std::endl;
	std::cout << "a <= b:" << " " << std::boolalpha << lessOrEqual << std::endl;
}