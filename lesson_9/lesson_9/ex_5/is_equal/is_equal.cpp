// is_equal -- function for comparing strings

#include "../../helpers/helpers.h"

bool is_equal(const char first_str[], const char second_str[])
{
	int first_length = helpers::string_length(first_str);
	int second_length = helpers::string_length(second_str);

	if (first_length != second_length) return false;

	for (int i = 0; i < first_length; i++)
	{
		if (first_str[i] != second_str[i]) return false;
	}

	return true;
}