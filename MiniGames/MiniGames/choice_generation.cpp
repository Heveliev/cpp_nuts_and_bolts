// choice_generation.cpp -- function to generate computer selection based on pseudo-random

#include <cstdlib>

#include "GameConfig.h"

#include "choice_generation.h"

int choice_generation()
{
	return rand() % GameConfig::NUMBER_VALUES;
}

char convert_number(int pc_choice)
{
	switch (pc_choice)
	{
	case GameConfig::ROCK:
		return GameConfig::ROCK_SYMBOL;
	case GameConfig::PAPER:
		return GameConfig::PAPER_SYMBOL;
	case GameConfig::SCISSORS:
		return GameConfig::SCISSORS_SYMBOL;
	default: 
		return '0';
	}
}
