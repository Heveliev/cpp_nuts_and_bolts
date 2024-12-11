// ex_1.cpp -- function to find the largest number out of three (assuming that there can be no equal numbers)

#include <iostream>

static void ex_1()
{
	int a, b, c, max;

	std::cout << "Please, enter 3 numbers." << std::endl;
	std::cout << "a =" << " ";
	std::cin >> a;
	std::cout << "b =" << " ";
	std::cin >> b;
	std::cout << "c =" << " ";
	std::cin >> c;


	std::cout << "The long way:" << std::endl;

	if (a >= b && a >= c)
	{
		std::cout << "The greatest number a =" << " " << a << std::endl;
	}
	else if (b >= a && b >= c)
	{
		std::cout << "The greatest number b =" << " " << b << std::endl;
	}
	else
	{
		std::cout << "The greatest number c =" << " " << c << std::endl;
	}


	std::cout << "Short way:" << std::endl;

	max = a;

	if (max <= b)
	{
		max = b;
	}
	if (max <= c)
	{
		max = c;
	}
	
	std::cout << "The greatest number =" << " " << max << std::endl;

}