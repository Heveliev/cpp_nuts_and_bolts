// counting_numbers.cpp -- function for validating and processing the sign of a number

#include <iostream>

#include "SignType.h"


static SignType determining_number(int number)
{
	if (number < 0) return SignType::Negative;

	if (number > 0) return SignType::Positive;

	return SignType::Zero;
}


void counting_numbers(int amount_numbers, int& negative, int& positive, int& zeroes)
{

	if (amount_numbers == 0) return;

	int number = 0;

	std::cout << "Enter number:" << " ";
	std::cin >> number;
	std::cout << std::endl;

	SignType result_validation = determining_number(number);

	if (result_validation == SignType::Negative) negative++;
	if (result_validation == SignType::Positive) positive++;
	if (result_validation == SignType::Zero) zeroes++;

	amount_numbers--;
	counting_numbers(amount_numbers, negative, positive, zeroes);
}