// is_equal -- function for comparing strings

#include "../../Config.h"

#include "../../helpers/helpers.h"
#include <iostream>

bool is_equal(const char first_str[], const char second_str[])
{
	int first_length = helpers::array_length(first_str);
	int second_length = helpers::array_length(second_str);

	if (first_length != second_length) return false;
	
	int length = (first_length + second_length) / 2;

	for (int i = 0; i < length; i++)
	{
		if (first_str[i] != second_str[i]) return false;
	}

	return true;
}