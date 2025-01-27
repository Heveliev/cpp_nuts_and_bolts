// traverse_array.cpp -- functions for iterating over elements of a two-dimensional array in a non-standard way 
// described in the document "ex_4_description.md"

#include <iostream>

#include "../../Config.h"

void traverse_array_ex4(const int arr_2d[Config::SMALL_ROWS][Config::SMALL_COLUMNS])
{

	for (int i = (Config::SMALL_ROWS - 1); i >= 0; i--)
	{
		int initialValue = (i % 2 == 0) ? Config::SMALL_COLUMNS - 1 : 0;
		int compareValue = (i % 2 == 0) ? -1 : Config::SMALL_COLUMNS;
		int increment = (i % 2 == 0) ? -1 : 1;

		for (int j = initialValue; j != compareValue; j += increment)
		{
			std::cout << arr_2d[i][j] << " ";
			std::cout << "counter " << j << std::endl;
		}
		
		std::cout << std::endl;
	}
}


void traverse_array_ex4(const int arr_2d[Config::ROWS][Config::COLUMNS])
{
	for (int i = (Config::ROWS - 1); i >= 0; i--)
	{
		int initialValue = (i % 2 == 0) ? Config::COLUMNS - 1 : 0;
		int compareValue = (i % 2 == 0) ? -1 : Config::COLUMNS;
		int increment = (i % 2 == 0) ? -1 : 1;

		for (int j = initialValue; j != compareValue; j += increment)
		{
			std::cout << arr_2d[i][j] << " ";
		}

		std::cout << std::endl;
	}
}