// factorial_using_recursion_reverse.cpp -- a function that calculates the value of the factorial from smallest to largest using recursion

int factorial_using_recursion_reverse(int count, int current)
{	
	if (current == count) return current;

	return current * factorial_using_recursion_reverse(count, current + 1);
}