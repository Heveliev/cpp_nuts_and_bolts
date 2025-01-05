#pragma once 

class GameConfig
{
public:
	static constexpr int END_PROGRAM = -1;

	static constexpr int NUMBER_SPACES = 10;

	static constexpr char DRAW_SYMBOL = 'd';
	static constexpr char WIN_SYMBOL = 'w';
	static constexpr char LOSS_SYMBOL = 'l';

	static constexpr int NUMBER_VALUES = 3;

	static constexpr char ROCK_SYMBOL = 'r';
	static constexpr char PAPER_SYMBOL = 'p';
	static constexpr char SCISSORS_SYMBOL = 's';

	static constexpr int ROCK = 0;
	static constexpr int PAPER = 1;
	static constexpr int SCISSORS = 2;
};