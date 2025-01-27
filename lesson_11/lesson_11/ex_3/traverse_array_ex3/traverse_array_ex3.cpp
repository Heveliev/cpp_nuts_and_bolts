// traverse_array.cpp -- functions for iterating over elements of a two-dimensional array in a non-standard way 
// described in the document "ex_3_description.md"

#include <iostream>

#include "../../Config.h"

void traverse_array_ex3(const int arr_2d[Config::SMALL_ROWS][Config::SMALL_COLUMNS])
{
	for (int j = (Config::SMALL_COLUMNS - 1); j >= 0; j--)
	{
		for (int i = 0; i < Config::SMALL_ROWS; i++)
		{
			std::cout << arr_2d[i][j] << " ";
		}
		std::cout << std::endl;
	}
}


void traverse_array_ex3(const int arr_2d[Config::ROWS][Config::COLUMNS])
{
	for (int j = (Config::COLUMNS - 1); j >= 0; j--)
	{
		for (int i = 0; i < Config::ROWS; i++)
		{
			std::cout << arr_2d[i][j] << " ";
		}
		std::cout << std::endl;
	}
}