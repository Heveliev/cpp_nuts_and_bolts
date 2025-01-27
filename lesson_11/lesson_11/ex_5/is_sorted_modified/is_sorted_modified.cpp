// is_sorted_modified.cpp -- function to check if an array is sorted by a given value (descending/ascending)

#include "../SortingDirection.h"

bool is_sorted_modified(const int* arr, int size, SortingDirection direction)
{
	for (int i = 0; i < size - 1; i++)
	{
		if ((direction == SortingDirection::descending && arr[i] < arr[i + 1]) ||
			(direction == SortingDirection::ascending && arr[i] > arr[i + 1])) {
			return false;
		}
	}
	//if(direction == SortingDirection::descending)
	//{ 
	//	for (int i = 0; i < (size - 1); i++)
	//	{
	//		if (arr[i] < arr[i + 1]) return false;
	//	}
	//}
	//else 
	//{
	//	for (int i = 0; i < (size - 1); i++)
	//	{
	//		if (arr[i] > arr[i + 1]) return false;
	//	}
	//}
	return true;
}