// calculate_sum.cpp -- function to check the length and calculate the sum of array elements

bool calculate_sum(const double* arr, int arr_size, double& sum)
{
	if (arr_size <= 0)
	{
		sum = 0;
		return false;
	}

	for (int i = 0; i < arr_size; i++)
	{
		sum += *(arr + i);
	}
	
	return true;
}