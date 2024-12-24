// choice_generation.cpp -- function to generate computer selection based on pseudo-random

#include <cstdlib>


static int choice_generation()
{
	const int NUMBER_VALUES = 3;

	return rand() % NUMBER_VALUES;
}

static char get_choice_from_number(int pc_choice)
{
	const char ROCK_SYMBOL = 'r', PAPER_SYMBOL = 'p', SCISSORS_SYMBOL = 's';
	const char ROCK = 0, PAPER = 1, SCISSORS = 2;

	switch (pc_choice)
	{
	case ROCK: 
		return ROCK_SYMBOL;
	case PAPER: 
		return PAPER_SYMBOL;
	case SCISSORS: 
		return SCISSORS_SYMBOL;
	default: 
		return '0';
	}
}
