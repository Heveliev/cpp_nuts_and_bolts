// round_result.cpp -- program for determining the winner

#include "GameConfig.h"

int convert_symbol(char choice)
{
	switch (choice)
	{
	case GameConfig::ROCK_SYMBOL:
		return GameConfig::ROCK;
	case GameConfig::PAPER_SYMBOL:
		return GameConfig::PAPER;
	case GameConfig::SCISSORS_SYMBOL:
		return GameConfig::SCISSORS;
	default:
		return 0;
	}
}


char round_result(char user_choice, int pc_choice)
{
	int user = 0;

	user = convert_symbol(user_choice);

	if (user == pc_choice)
	{
		return GameConfig::DRAW_SYMBOL;
	}

	return (user - pc_choice + GameConfig::NUMBER_VALUES) % GameConfig::NUMBER_VALUES == 1 ? GameConfig::WIN_SYMBOL : GameConfig::LOSS_SYMBOL;
}



