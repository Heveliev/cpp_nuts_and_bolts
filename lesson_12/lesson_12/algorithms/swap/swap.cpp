//swap.cpp -- swaps values using pointers


namespace algorithms
{
	void swap(int* a, int* b)
	{
		if (*a == *b || a == nullptr || b == nullptr) return;

		int temp = *a;
		*a = *b;
		*b = temp;
	}
}