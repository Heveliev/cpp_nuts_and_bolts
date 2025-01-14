// find.cpp -- function to find a specific number in an array

bool find(const int* arr, int size, int elem)
{
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) == elem) return true;
	}

	return false;
}