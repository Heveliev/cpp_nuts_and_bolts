// bubble_sort.cpp -- function for sorting an array (using the bubble algorithm) O(n^2)

#include "../../Config.h"

#include "../algorithms.h"


namespace algorithms
{
	void bubble_sort(int arr[], int size, Sort::SortingDirection direction)
	{
		for (int i = size - 1; i > 0; i--)
		{
			bool swapped = false;
			for (int j = size - 1; j > (size - 1) - i; j--)
			{
				if (direction == Sort::SortingDirection::descending && arr[j - 1] < arr[j] ||
					direction == Sort::SortingDirection::ascending && arr[j - 1] > arr[j])
				{
					algorithms::swap(&arr[j - 1], &arr[j]);
					swapped = true;
				}
			}
		if (!swapped) break;
		}
	}
}