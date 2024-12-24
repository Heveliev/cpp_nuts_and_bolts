// MiniGames.cpp -- game rock/paper/scissors (with computer)

#include <ctime>
#include <iostream>
#include <iomanip>


#include "round_result.cpp"
#include "choice_generation.cpp"


int main()
{
	std::srand(std::time(nullptr));

	const int END_PROGRAM = -1;
	const unsigned int NUMBER_SPACES = 10;
	const char ROCK_SYMBOL = 'r', PAPER_SYMBOL = 'p', SCISSORS_SYMBOL = 's';
	const char DRAW_SYMBOL = 'd', WIN_SYMBOL = 'w', LOSS_SYMBOL = 'l';

	
	while (true)
	{

		int draws = 0, wins = 0, losses = 0;
		int number_rounds = END_PROGRAM;


		std::cout << "Enter" << " " << END_PROGRAM << " " 
			<< "to exit or the number of rounds you want to play : " 
			<< " ";
		std::cin >> number_rounds;
		std::cout << std::endl;

		if (number_rounds == END_PROGRAM)
		{
			std::cout << "You entered" << " " << number_rounds
				<< "," << " " << "the program closes." << std::endl;
			std::cout << "GG!" << std::endl;
			break;
		}

		if (number_rounds <= 0)
		{
			std::cout << "This number of rounds cannot exist, please enter a valid number." << std::endl << std::endl;
			continue;
		}

		char user_choice = '0';
		int pc_choice = -1;

		for (int i = 1; i <= number_rounds; i++)
		{
			std::cout << "To make your turn enter one of possible symbols:" << std::endl;
			std::cout << std::setw(NUMBER_SPACES);
			std::cout << ROCK_SYMBOL << " " << "-" << " " << "rock";
			std::cout << std::setw(NUMBER_SPACES);
			std::cout << PAPER_SYMBOL << " " << "-" << " " << "paper";
			std::cout << std::setw(NUMBER_SPACES);
			std::cout << SCISSORS_SYMBOL << " " << "-" << " " << "scissors";
			std::cout << std::endl;
			
			pc_choice = choice_generation();

			std::cout << "Your choice is" << " ";
			std::cin >> user_choice;

			int result = round_result(user_choice, pc_choice);

			std::cout << "PC choice is" << " " << get_choice_from_number(pc_choice) << std::endl;




			//if (result == WIN_SYMBOL)
			//{
			//	std::cout << "WIN!" << std::endl;
			//	wins++;
			//}
			//else if (result == LOSS_SYMBOL)
			//{
			//	std::cout << "LOSS:(" << std::endl;
			//	losses++;
			//}
			//else
			//{
			//	std::cout << "DRAW:/" << std::endl;
			//	draws++;
			//}

			switch (result)
			{
			case WIN_SYMBOL:
				std::cout << "WIN!" << std::endl << std::endl;
				wins++;
				break;
			case LOSS_SYMBOL:
				std::cout << "LOSS:(" << std::endl << std::endl;
				losses++;
				break;
			case DRAW_SYMBOL:
				std::cout << "DRAW:/" << std::endl << std::endl;
				draws++;
				break;
			}

		}

		std::cout << "Thanks for playing. Your final stats:" << std::endl;
		std::cout << std::setw(NUMBER_SPACES);
		std::cout << "number of rounds -" << " " << number_rounds << std::endl;
		std::cout << std::setw(NUMBER_SPACES);
		std::cout << "number of wins -" << " " << wins << std::endl;
		std::cout << std::setw(NUMBER_SPACES);
		std::cout << "number of losses -" << " " << losses << std::endl;
		std::cout << std::setw(NUMBER_SPACES);
		std::cout << "number of draws -" << " " << draws << std::endl;

		std::cout << "---";
		if (wins > losses)
		{
			std::cout << "You are smarter than my PC, congratulations!";
		}
		else if (losses > wins)
		{
			std::cout << "You were just unlucky, try next time!...:(";
		}
		else
		{
			std::cout << "The friendship between you and the computer has won!";
		}
		std::cout << "---" << std::endl;



		std::cout << "*************************************************************************";
		std::cout << std::endl << std::endl << std::endl << std::endl;

	}
}