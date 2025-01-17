// find.cpp -- function to find number in 2D array using linear search O(n*m)

#include "../../Config.h"


bool find(const int arr_2d[Config::ROWS][Config::COLUMNS], int to_find)
{
	for (int i = 0; i < Config::ROWS; i++)
	{
		for (int j = 0; j < Config::COLUMNS; j++)
		{
			if (arr_2d[i][j] == to_find) return true;
		}
	}

	return false;
}