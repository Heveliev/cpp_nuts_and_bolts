// ex_4.cpp -- function to calculate the n-th element of the Fibonacci sequence

#include <iostream>


static void print_element(unsigned int, unsigned int);


static void ex_4()
{
	unsigned int n = 0;

	while (true)
	{
		std::cout << "Enter the number of the Fibonacci sequence element whose value you are interested in:" << " ";
		std::cin >> n;

		if (n == 0)
		{
			std::cout << "You entered 0, the program is finished." << std::endl;
			break;
		}

		unsigned int current_value = 1;

		if (n == current_value)
		{
			print_element(n, current_value);
			continue;
		}

		unsigned int penultimate_value = 0, antepenultimate_value = 1;

		for (unsigned int i = 1; i < n; i++)
		{
			current_value = penultimate_value + antepenultimate_value;
			penultimate_value = antepenultimate_value;
			antepenultimate_value = current_value;
		}
		print_element(n, current_value);
	}
	
}

static void print_element(unsigned int n, unsigned int current_value)
{
	std::cout << "Value of" << " " << n << " " << "element =" << " " << current_value << std::endl;
}