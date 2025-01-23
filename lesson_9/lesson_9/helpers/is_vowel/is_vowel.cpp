// is_vowel -- checks if a character is a vowel

#include "../../Config.h"

namespace helpers 
{
	bool is_vowel(char symbol)
	{
		for (int i = 0; i < Config::AMOUNT_VOWELS; i++)
		{
			if (symbol == Config::VOWELS[i]) return true;
		}

		return false;
	}
}