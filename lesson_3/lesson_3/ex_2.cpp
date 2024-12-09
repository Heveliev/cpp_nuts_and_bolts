// ex_2.cpp -- function to calculate sum, multiplication and arithmetic mean of 3 numbers

#include <iostream>

static void ex_2()
{
	double a, b, c, sum, mult, arith_mean;
	const int AMOUNT_NUM = 3;

	std::cout << "Please, enter 3 numbers." << std::endl;
	std::cout << "a =" << " ";
	std::cin >> a;
	std::cout << "b =" << " ";
	std::cin >> b;
	std::cout << "c =" << " ";
	std::cin >> c;

	sum = a + b + c;
	mult = a * b * c;
	arith_mean = sum / static_cast<double>(AMOUNT_NUM);

	std::cout << "The sum of your numbers:" << " " << sum << std::endl;
	std::cout << "Multiplication of your numbers:" << " " << mult << std::endl;
	std::cout << "The arithmetic mean of your numbers:" << " " << arith_mean << std::endl;
}