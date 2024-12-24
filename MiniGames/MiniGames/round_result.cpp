// round_result.cpp -- program for determining the winner


int get_choice_from_symbol(char);


static char round_result(char user_choice, int pc_choice)
{
	int const number_values = 3;

	int user = -1;

	user = get_choice_from_symbol(user_choice);

	if (user == pc_choice)
	{
		return 'd';
	}

	return (user - pc_choice + number_values) % number_values == 1 ? 'w' : 'l';
}



int get_choice_from_symbol(char choice)
{
	const char ROCK_SYMBOL = 'r', PAPER_SYMBOL = 'p', SCISSORS_SYMBOL = 's';
	const char ROCK = 0, PAPER = 1, SCISSORS = 2;

	switch (choice)
	{
	case ROCK_SYMBOL:
		return ROCK;
	case PAPER_SYMBOL:
		return PAPER;
	case SCISSORS_SYMBOL:
		return SCISSORS;
	default:
		return -1;
	}
}