// ex_3.cpp -- function to check if the input data forms a triangle

#include <iostream>

/*
* 1.Ñannot be equal to negative, 0, or greater than or equal to 180.
* 2.Sum of all angles = 180.
*/

bool angle_validation(int);

static void ex_3()
{
	const int required_sum = 180;

	int a, b, y, sum;
	bool is_valid_a, is_valid_b, is_valid_y, is_valid_sum;


	std::cout << "Please enter 3 angles to check if it is possible to construct a triangle from them:" << std::endl;
	std::cout << "a =" << " ";
	std::cin >> a;
	std::cout << "b =" << " ";
	std::cin >> b;
	std::cout << "y =" << " ";
	std::cin >> y;


	is_valid_a = angle_validation(a);
	is_valid_b = angle_validation(b);
	is_valid_y = angle_validation(y);

	sum = a + b + y;
	is_valid_sum = sum == required_sum;

	if (is_valid_a && is_valid_b && is_valid_y && is_valid_sum) {
		std::cout << "You can build a triangle from your corners!";
	}
	else
	{
		std::cout << "Unfortunately it is impossible to build a triangle from your angles...:(";
	}

}


bool angle_validation(int corner)
{
	const int min = 0, max = 180;

	bool val = corner > min && corner < max;

	return val;
}