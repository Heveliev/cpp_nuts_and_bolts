// print_natural_numbers_descending_recursive -- function to print N natural numbers from largest to smallest using recursion

#include <iostream>

void print_natural_numbers_descending_recursive(int count)
{
	if (count < 0) return;
	std::cout << count << " ";
	print_natural_numbers_descending_recursive(count - 1);
}