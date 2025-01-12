// factorial_using_recursion.cpp -- a function that calculates the value of the factorial using recursion

int factorial_using_recursion(int count)
{
	int result = 1;

	if (count <= 1) return result;

	result = count * factorial_using_recursion(count - 1);

	return result;
}