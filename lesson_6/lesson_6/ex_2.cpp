// ex_2.cpp -- program for printing figures by given values

#include <iostream>


static void print_symbol(char);

static void end_line();

static void ex_2()
{
	const char SYMBOL_STAR = '*';
	const char SYMBOL_SPACE = ' ';
	const char SYMBOL_ZERO = '0';
	const char SYMBOL_ONE = '1';

	int width = 0, height = 0;

	
	while (true)
	{
		std::cout << "Set the width and height of the shapes:" << std::endl;
		std::cout << "Width =" << " ";
		std::cin >> width;
		std::cout << "Heidht =" << " ";
		std::cin >> height;

		if (width == -1 && height == -1)
		{
			std::cout << "Write width and height equal to -1 for output";
			break;
		}

		if (width <= 0 || height <= 0)
		{
			std::cout << "Try again, but don't set negative numbers or 0!";
			continue;
		}

		for(int i = width; i > 0 ; i--)
		{
			for(int j = 0; j < i; j++)
			{ 
				print_symbol(SYMBOL_STAR);
			}

			end_line();
		}

		std::cout << std::endl;

		for (int i = 1; i <= width; i++)
		{
			for (int j = 0; j < i; j++)
			{
				print_symbol(SYMBOL_STAR);
			}

			end_line();
		}

		std::cout << std::endl;

		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
			{
				print_symbol(SYMBOL_STAR);
			}

			end_line();
		}

		std::cout << std::endl;

		for (int i = 0; i < height; i++)
		{

			for (int k = 0; k < i; k++)
			{
				print_symbol(SYMBOL_SPACE);
			}


			for (int j = 0; j < width; j++)
			{
				print_symbol(SYMBOL_STAR);
			}

			end_line();
		}

		std::cout << std::endl;

		for (int i = 1; i <= width; i++)
		{
			for (int j = 0; j < i; j++)
			{
				(j % 2) ? print_symbol(SYMBOL_ZERO) : print_symbol(SYMBOL_ONE);
			}

			end_line();
		}
	}

}


static void print_symbol(char symbol)
{
	std::cout << symbol;
}

static void end_line() 
{
	std::cout << std::endl;
}