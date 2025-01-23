// swap.cpp -- functions to swap two values using a pointer and using a reference


namespace link
{
	void swap(int& a, int& b)
	{
		int temporary = a;
		a = b;
		b = temporary;
	}
}


namespace ptr
{
	void swap(int* a, int* b)
	{
		if(a != nullptr && b != nullptr)
		{
			int temporary = *a;
			*a = *b;
			*b = temporary;
		}
	}
}