// factorial_using_loop.cpp -- a function that calculates the value of the factorial using a loop

int factorial_using_loop(int count)
{
	int result = 1;
	for (int i = count; i > 1; i--)
	{
		result *= i;
	}

	return result;
}