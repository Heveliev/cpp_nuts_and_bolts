// ex_5.cpp -- function for calculating the factorial of a number

#include <iostream>

static void ex_5()
{
	unsigned int number = 0;


	while (true)
	{
		std::cout << "Write the number whose factorial you are interested in:" << " ";
		std::cin >> number;

		if (number == 0)
		{
			std::cout << "You entered 0, the program is finished." << std::endl;
			break;
		}

		std::cout << "We count:" << " " << number << "!" << std::endl;


		unsigned int factorial = 1;

		for (unsigned int i = 1; i <= number; i++)
		{
			factorial *= i;
		}

		std::cout << "Success," << " " << number << "!"
			<< " " << "=" << " " << factorial << std::endl;
	}
}