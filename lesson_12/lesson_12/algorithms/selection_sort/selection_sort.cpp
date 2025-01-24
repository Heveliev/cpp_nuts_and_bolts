// selection_sort.cpp -- array sorting function (using linear algorithm) O(n^2)

#include "../../Config.h"

#include "../algorithms.h"

namespace algorithms
{
	void selection_sort(int arr[], int size, Sort::SortingDirection direction)
	{
		for (int i = 0; i < size; i++)
		{
			int index = i;

			for (int j = i; j < size; j++)
			{
				if (direction == Sort::SortingDirection::descending && arr[j] > arr[index] ||
					direction == Sort::SortingDirection::ascending && arr[j] < arr[index])
				{
					index = j;
				}
			}
			if(index != i) swap(&arr[index], &arr[i]);
		}
	}
}

