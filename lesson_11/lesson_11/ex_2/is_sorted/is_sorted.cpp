// is_sorted.cpp -- function to check if an array is sorted in ascending order

bool is_sorted(const int* arr, int size)
{
	for (int i = 0; i < (size - 1); i++)
	{
		if (arr[i] > arr[i + 1]) return false;
	}

	return true;
}