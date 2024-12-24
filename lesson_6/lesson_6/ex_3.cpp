// ex_3.cpp -- function to check characters

#include <iostream>
#include <cctype>

static void ex_3()
{
	int sum = 0;
	char symbol = '.';


	while (true)
	{
		std::cout << "Please enter any symbol(to exit, enter \'.\'):" << " ";
		std::cin >> symbol;

		if (symbol == '.')
		{
			break;
		}

		std::cout << "Let's see what happens to him." << std::endl;

		bool is_lower_letter = std::islower(symbol);

		if (is_lower_letter)
		{
			char upper_case = static_cast<char>(std::toupper(symbol));
			std::cout << "You entered a lowercase character, we converted it to uppercase, here is the result:"
				<< " " << "\'" << upper_case << "\'" << std::endl;
			continue;
		}

		bool is_number = std::isdigit(symbol);

		if(is_number)
		{
			sum += (symbol - '0');
			std::cout << "You entered a number, here is the sum of all the numbers you entered:"
				<< " " << sum << std::endl;
			continue;
		}
		bool is_special_symbol = std::ispunct(symbol);

		if (is_special_symbol)
		{
			std::cout << "Sorry, but we do not support special symbols and separator signs. Your symbol:"
				<< " " << "\'" << symbol << "\'" << std::endl;
			continue;
		}

		std::cout << "Sorry, we don't know such symbols....:(" << std::endl;
	}

}