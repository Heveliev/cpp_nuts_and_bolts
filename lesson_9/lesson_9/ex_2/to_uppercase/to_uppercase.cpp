// to_uppercase.cpp -- function to convert and replace a letter from lowercase to uppercase

#include "../../Config.h"

#include "../ConfigEx_2.h"

void to_uppercase(char str[])
{
	int lower_limit = static_cast<int>(ConfigEx_2::ALPHABET_FIRST_LETTER_LOW);
	int upper_limit = static_cast<int>(ConfigEx_2::ALPHABET_LAST_LETTER_LOW);
	int case_difference = static_cast<int>(ConfigEx_2::ALPHABET_FIRST_LETTER_LOW) - static_cast<int>(ConfigEx_2::ALPHABET_FIRST_LETTER_UPP);

	for (int i = 0; str[i] != Config::END_STRING; i++)
	{
		if (static_cast<int>(str[i]) >= lower_limit && static_cast<int>(str[i]) <= upper_limit)
		{
			str[i] = static_cast<char>( static_cast<int>(str[i]) - case_difference );
		}
	}
}