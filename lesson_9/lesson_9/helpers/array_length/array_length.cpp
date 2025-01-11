// array_length -- function to calculate the length of an array

#include "../../Config.h"

namespace helpers 
{
	int array_length(const char str[])
	{
		int length = 0;
		for (int i = 0; str[i] != Config::END_STRING; i++)
		{
			length++;
		}
		return length;
	}
}