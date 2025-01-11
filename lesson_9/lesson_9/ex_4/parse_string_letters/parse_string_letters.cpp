// parse_string_letters.cpp -- function to count consonants and vowels in a string

#include "../../Config.h"

#include "../ConfigEx_4.h"
#include "../../helpers/helpers.h"

void parse_string_letters(const char str[], int& vowelsCount, int& constonantsCount)
{
	int lower_limit = static_cast<int>(ConfigEx_4::ALPHABET_FIRST_LETTER);
	int upper_limit = static_cast<int>(ConfigEx_4::ALPHABET_LAST_LETTER);

	for (int i = 0; str[i] != Config::END_STRING; i++)
	{
		bool is_current_symbol_vowel = helpers::is_vowel(str[i]);

		if (is_current_symbol_vowel) vowelsCount++;

		if (!is_current_symbol_vowel && static_cast<int>(str[i]) >= lower_limit && static_cast<int>(str[i]) <= upper_limit) constonantsCount++;
	}
}