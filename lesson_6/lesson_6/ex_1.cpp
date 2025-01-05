// ex_1.cpp -- program for checking and printing arithmetic progression

#include <iostream>

static void ex_1()
{
	float n1 = 0, d = 0;
	int n = 0;

	std::cout << "Please enter the data for arithmetic progression in this form:" << std::endl;
	std::cout << "First member =" << " ";
	std::cin >> n1;
	std::cout << "Number of elements =" << " ";
	std::cin >> n;
	std::cout << "Progression step =" << " ";
	std::cin >> d;


	if (n > 0 && d != 0)
	{
		for (int i = 0; i < n; i++)
		{
			std::cout << n1 + i * d << std::endl;
		}
	}
	else
	{
		std::cout << "Sorry, but with the numbers you specified it is impossible to create an arithmetic sequence! :(" << std::endl;
	}


}