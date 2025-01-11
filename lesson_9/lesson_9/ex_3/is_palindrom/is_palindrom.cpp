// is_palindrom -- function to check string for palindrome

#include <iostream>

#include "../../helpers/helpers.h"
#include "../../Config.h"


bool is_palindrom(const char str[])
{
	int length = helpers::array_length(str);
	for (int i = 0; str[i] != Config::END_STRING; i++)
	{
		if (str[i] != str[(length - 1) - i]) return false;
	}
	return true;
}