// ex_1.cpp -- program for checking and printing arithmetic progression

/*
* 1.The step should not be 0 (d != 0).
* 2.Check if there can be an arithmetic progression with given values.
*   The difference between the first and last element divided by the step must be equal to 0,
*	and the number of elements must be greater than 0.
* 3.If yes then output all numbers of the progression. If no then output: "bad luck".
*/

#include <iostream>
#include <cmath>

bool progression_validation(float, float, float);

static void ex_1()
{
	float n1 = 0, n_last = 0, d = 0;
	bool is_valid_progression = false;

	std::cout << "Please enter the data for arithmetic progression in this form:" << std::endl;
	std::cout << "First member =" << " ";
	std::cin >> n1;
	std::cout << "Last member =" << " ";
	std::cin >> n_last;
	std::cout << "Progression step =" << " ";
	std::cin >> d;


	is_valid_progression = progression_validation(n1, n_last, d);


	if (is_valid_progression)
	{
		float n = n1;

		while (n <= n_last || n >= n_last)
		{
			std::cout << n << std::endl;

			if (n == n_last)
				break;

			n += d;
		}
	}
	else
	{
		std::cout << "Sorry, but with the numbers you specified it is impossible to create an arithmetic sequence! :(" << std::endl;
	}


}

bool progression_validation(float n1, float n_last, float d)
{
	bool result = false;

	if (n1 != n_last && d != 0)
	{
		bool is_exact_division = false;

		int total_terms = 0;

		float subtraction = n_last - n1;

		is_exact_division = fmod(subtraction, d) == 0.0f;

		total_terms = static_cast<int>((subtraction / d) + 1);

		result = is_exact_division && (total_terms > 0);
	}

	return result;
}