// print_natural_numbers_descending.cpp -- function to print N natural numbers from largest to smallest using a loop

#include <iostream>

void print_natural_numbers_descending(int count)
{
	for (int i = count; i >= 0; i--)
	{
		std::cout << i << " ";
	}

	std::cout << std::endl;
}