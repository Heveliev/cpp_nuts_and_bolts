// is_palindrom -- function to check string for palindrome

#include <iostream>

#include "../../helpers/helpers.h"


bool is_palindrom(const char str[])
{
	int length = helpers::string_length(str);
	for (int i = 0; i < length / 2; i++)
	{
		if (str[i] != str[(length - 1) - i]) return false;
	}
	return true;
}