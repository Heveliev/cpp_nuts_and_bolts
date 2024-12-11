// ex_4.cpp -- function to output the season depending on the number

#include <iostream>

static void ex_4()
{
	int month = 1;

	std::cout << "Please enter a month between 1-12 to get the season:" << " ";
	std::cin >> month;


	if (month >= 1 && month <= 12)
	{
		switch (month)
		{
		case 12:
		case 1:
		case 2:
			std::cout << "Winter!" << std::endl;
			break;
		case 3:
		case 4:
		case 5:
			std::cout << "Spring!" << std::endl;
			break;
		case 6:
		case 7:
		case 8:
			std::cout << "Summer!" << std::endl;
			break;
		case 9:
		case 10:
		case 11:
			std::cout << "Autumn" << std::endl;
			break;
		default:
			std::cout << "Incorrect data or some error...:(" << std::endl;
			break;
		}
	}
	else
	{
		std::cout << "Unfortunately, such a month does not exist yet.....:(" << std::endl;
		std::cout << "Please try again only in the range 1-12." << std::endl;
	}

}