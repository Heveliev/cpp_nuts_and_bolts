// sort.cpp -- function to sort a two-dimensional array by rows and columns

#include "../../Config.h"

#include "../../algorithms/algorithms.h"

void sort(int arr[Config::ROWS][Config::COLUMNS],
	Table::SortingDirection table_direction,
	Sort::SortingDirection sort_direction)
{
	if (table_direction == Table::SortingDirection::by_rows)
	{
		for (int i = 0; i < Config::ROWS; i++)
		{
			algorithms::quick_sort(arr[i], 0, Config::ROWS - 1, sort_direction);
		}
	}
	else
	{
		for (int i = 0; i < Config::ROWS; i++)
		{
			int column[Config::COLUMNS];
			for (int j = 0; j < Config::COLUMNS; j++)
			{
				column[j] = arr[j][i];
			}

			algorithms::quick_sort(column, 0, Config::ROWS - 1, sort_direction);

			for (int j = 0; j < Config::COLUMNS; j++)
			{
				arr[j][i] = column[j];
			}
		}
		 
		 
	}
	
}