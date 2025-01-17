// traverse_array.cpp -- functions for iterating over elements of a two-dimensional array in a non-standard way 
// described in the document "ex_4_description.md"

#include <iostream>

#include "../../Config.h"

void traverse_array_ex4(const int arr_2d[Config::SMALL_ROWS][Config::SMALL_COLUMNS])
{
	int counter = 0;
	for (int i = (Config::SMALL_ROWS - 1); i >= 0; i--)
	{
		for (int j = 0; j < Config::SMALL_COLUMNS; j++)
		{
			if (counter >= Config::SMALL_COLUMNS) counter--; else if (counter < 0) counter++;
			std::cout << arr_2d[i][counter] << " ";
			if (i % 2) counter++; else counter--;
		}
		
		std::cout << std::endl;
	}
}


void traverse_array_ex4(const int arr_2d[Config::ROWS][Config::COLUMNS])
{
	int counter = 0;
	for (int i = (Config::ROWS - 1); i >= 0; i--)
	{
		for (int j = 0; j < Config::COLUMNS; j++)
		{
			if (counter >= Config::COLUMNS) counter--; else if (counter < 0) counter++;
			std::cout << arr_2d[i][counter] << " ";
			if (i % 2) counter++; else counter--;
		}

		std::cout << std::endl;
	}
}