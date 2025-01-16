// string_length -- function to calculate the length of an array

namespace helpers 
{
	int string_length(const char str[])
	{
		int length = 0;
		for (int i = 0; str[i] != '\0'; i++)
		{
			length++;
		}
		return length;
	}
}