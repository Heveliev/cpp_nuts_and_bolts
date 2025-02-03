#pragma once

#include "../Config.h"

namespace algorithms
{
	void bubble_sort(int arr[], int size, Sort::SortingDirection direction = Sort::SortingDirection::ascending);

	void swap(int* a, int* b);

	void selection_sort(int arr[], int size, Sort::SortingDirection direction = Sort::SortingDirection::ascending);

	void quick_sort(int arr[], int low, int hight, Sort::SortingDirection direction = Sort::SortingDirection::ascending);

}