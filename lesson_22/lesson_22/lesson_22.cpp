// lesson_22.cpp -- 

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#include "Config.h"


bool compareByLength(const std::string& str1, const std::string& str2)
{
	return str1.length() < str2.length();
}


class LengthComparator
{
public:
	bool operator()(const std::string& str1, const std::string& str2)
	{
		return str1.length() < str2.length();
	}
};


unsigned int countDivisibleBy(const std::vector<int>& arr, int number)
{
	return std::count_if(arr.begin(), arr.end(), 
		[number](int value)
		{
		return value % number == 0;
		});
}


int main()
{
	std::sort(stringArray.begin(), stringArray.end(), compareByLength);
	std::sort(fruitArray.begin(), fruitArray.end(), LengthComparator());
	std::sort(cosmoArray.begin(), cosmoArray.end(), 
		[](const std::string& str1, const std::string& str2)
		{
			return str1.length() < str2.length();
		});


	std::cout << std::endl << std::endl;

	std::cout << "Function" << std::endl;
	std::cout << "String Array:" << std::endl;
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "lenght: " << stringArray[i].length() << " " << stringArray[i] << std::endl;
	}
	std::cout << std::endl << std::endl;

	std::cout << "Functor" << std::endl;
	std::cout << "Fruit Array:" << std::endl;
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "lenght: " << fruitArray[i].length() << " " << fruitArray[i] << std::endl;
	}
	std::cout << std::endl << std::endl;

	std::cout << "Lambda" << std::endl;
	std::cout << "Cosmo Array:" << std::endl;
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "lenght: " << cosmoArray[i].length() << " " << cosmoArray[i] << std::endl;

	}
	std::cout << std::endl << std::endl;


	std::cout << "countDivisibleBy 5" << std::endl;
	std::cout << "count " << countDivisibleBy(intArray, 5) << std::endl;
	std::cout << std::endl << std::endl;

	std::cout << "countDivisibleBy 2" << std::endl;
	std::cout << "count " << countDivisibleBy(intArray, 2) << std::endl;
	std::cout << std::endl << std::endl;

	std::cout << "countDivisibleBy 3" << std::endl;
	std::cout << "count " << countDivisibleBy(intArray, 3) << std::endl;
	std::cout << std::endl << std::endl;

	std::cout << "countDivisibleBy 1" << std::endl;
	std::cout << "count " << countDivisibleBy(intArray, 1) << std::endl;
	std::cout << std::endl << std::endl;

	std::cout << "countDivisibleBy 10" << std::endl;
	std::cout << "count " << countDivisibleBy(intArray, 10) << std::endl;
	std::cout << std::endl << std::endl;


	return 0;
}