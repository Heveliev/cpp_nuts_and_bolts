// print_natural_numbers_ascending.cpp -- function to print N natural numbers from smallest to largest using a loop

#include <iostream>

void print_natural_numbers_ascending(int count)
{
	for (int i = 0; i <= count; i++)
	{
		std::cout << i << " ";
	}

	std::cout << std::endl;
}