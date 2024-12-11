// ex_6.cpp -- function to output the month that corresponds to a number using "enum"

#include <iostream>

const enum class Month
{
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December,
};

static void ex_6()
{
	int month_number = 1;

	std::cout << "Please enter a month between 1-12:" << " ";
	std::cin >> month_number;

	if (month_number >= 1 && month_number <= 12)
	{
		Month month = static_cast<Month>(month_number);

		switch (month)
		{
		case Month::January:
			std::cout << "January!" << std::endl;
			break;
		case Month::February:
			std::cout << "February!" << std::endl;
			break;
		case Month::March:
			std::cout << "March!" << std::endl;
			break;
		case Month::April:
			std::cout << "April!" << std::endl;
			break;
		case Month::May:
			std::cout << "May!" << std::endl;
			break;
		case Month::June:
			std::cout << "June!" << std::endl;
			break;
		case Month::July:
			std::cout << "July!" << std::endl;
			break;
		case Month::August:
			std::cout << "August!" << std::endl;
			break;
		case Month::September:
			std::cout << "September!" << std::endl;
			break;
		case Month::October:
			std::cout << "October!" << std::endl;
			break;
		case Month::November:
			std::cout << "November!" << std::endl;
			break;
		case Month::December:
			std::cout << "December!" << std::endl;
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