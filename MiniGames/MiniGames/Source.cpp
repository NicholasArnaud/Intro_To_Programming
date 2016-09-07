#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <stdlib.h>
#include <string>
int main()
{
	char input;
	int rand();
	std::cout << "Press 'm' for menu"<< std:: endl;
	std::cin >> input;
	
	if (input == 'm')
	{
		std::cout << "Press 'a' to play Rock, Paper, Scissers \n";
		std::cout << "Press 'b' to play Coin Flip \n";
		std::cout << "Press 'c' to Play Dice Roll \n";
		std::cout << "Press 'd' to Play Tic-Tac-Toe \n";
		std::cout << "Press 'q' to quit playig \n";
		system("pause");
	}
	std::cin >> input;
	// rock paper scissors
	if (input == 'a'&& input !='q')
	{
		do {


			std::string playerPick;

			int computer = 0;
			int srand = 0;

			std::cout << "rock, paper, or scissors?" << std::endl;
			std::cout << " " << std::endl;

			std::cin >> playerPick;

			std::cout << "You entered: " << playerPick << std::endl;
			std::cout << " " << std::endl;

			srand = (rand() + time(0)) % 6;

			computer = rand() % 10 + 1;

			if (computer <= 3)
			{

				std::cout << "Computer chooses: Rock" << std::endl;
				std::cout << " " << std::endl;

			}

			else if (computer <= 6)
			{

				std::cout << "Computer chooses Paper" << std::endl;
				std::cout << " " << std::endl;

			}
			else if (computer >= 7)
			{

				std::cout << "Computer chooses: Scissors" << std::endl;
				std::cout << " " << std::endl;

			}

			if (playerPick == "rock" && computer <= 3)
			{

				std::cout << "It's a tie!" << std::endl;
				std::cout << " " << std::endl;

			}
			else if (playerPick == "rock" && computer <= 6)
			{

				std::cout << "You lose!" << std::endl;
				std::cout << " " << std::endl;

			}
			else if (playerPick == "rock" && computer >= 7)
			{

				std::cout << "You win!" << std::endl;
				std::cout << " " << std::endl;

			}
			if (playerPick == "paper" && computer <= 3)
			{

				std::cout << "You win!" << std::endl;
				std::cout << " " << std::endl;

			}
			else if (playerPick == "paper" && computer <= 6)
			{

				std::cout << "It's a tie!" << std::endl;
				std::cout << " " << std::endl;

			}
			else if (playerPick == "paper" && computer >= 7)
			{

				std::cout << "You lose!" << std::endl;
				std::cout << " " << std::endl;

			}
			if (playerPick == "scissors" && computer <= 3)
			{

				std::cout << "You lose!" << std::endl;
				std::cout << " " << std::endl;

			}
			else if (playerPick == "scissors" && computer <= 6)
			{

				std::cout << "You win!" << std::endl;
				std::cout << " " << std::endl;

			}
			else if (playerPick == "scissors" && computer >= 7)
			{

				std::cout << "It's a tie!" << std::endl;
				std::cout << " " << std::endl;

			}
			if (input == 'm')
				break;
		} while (std::cin.get());
		std::cin.get();
		return 1;
	}

	// Coin Flip
	if (input == 'b' && input != 'q')
	{

		for (int i = 0; i < rand(); i++)
		{
			int whatEver = rand();
			if (whatEver % 2 == 0)
			{
				std::cout << "Tails" << std::endl;
			}

			else
			{
				std::cout << "Heads" << std::endl;
			}
		}
		return 1;
	}


	// dice roll
	if (input =='c' && input !='q')
	{
	int computer = 0;
	bool complete = false;
	computer = (rand() + time(0)) % 6;
	int dice = (rand() + time(0)) % 6;
		while (!complete)
		{
			std::cout << "Press '1' to roll die." << std::endl;
			std::cin >> dice;
		
			if (dice == computer)
			{
				std::cout << "Tie" << std::endl;
				complete = true;
			}
			else
				if (dice > computer)
				{
					std::cout << "You rolled high" << std::endl;
					std::cout << "You Win! \n Try again?" << std::endl;
				}
				else
				{
					std::cout << "Rolled too low" << std::endl;
					std::cout << "Try again?" << std::endl;
				}
		}
	}	


	// Tic-Tac-Toe
	if (input == 'd' && input !='q')
	{
		
		int checkwin(char[]);
		void board(char[]);
		char square[10] = { 'o','1','2','3','4','5','6','7','8','9' };
		int player = 1, i, choice;

		char mark;
		do
		{
			board(square);

			if (player % 2 == 1)
				player = 1;
			else
				player = 2;


			// player 2
			if (player == 2)
			{
				std::cout << "Players  " << player << std::endl;
				std::cout << "Press Enter for Computer" << std::endl;
				choice = rand() % 9;
				mark = 'O';
				int turn = 1;
				int placed = 0;
				while (placed == 0)
				{

					if (choice == 1 && square[1] == '1') {
						square[1] = mark;
						placed = 1;
					}
					else if (choice == 2 && square[2] == '2') {

						square[2] = mark;
						placed = 1;
					}
					else if (choice == 3 && square[3] == '3') {

						square[3] = mark;
						placed = 1;
					}
					else if (choice == 4 && square[4] == '4') {

						placed = 1;
						square[4] = mark;
					}
					else if (choice == 5 && square[5] == '5') {

						square[5] = mark;
						placed = 1;
					}
					else if (choice == 6 && square[6] == '6') {

						square[6] = mark;
						placed = 1;
					}
					else if (choice == 7 && square[7] == '7') {

						square[7] = mark;
						placed = 1;
					}
					else if (choice == 8 && square[8] == '8') {

						square[8] = mark;
						placed = 1;
					}
					else if (choice == 9 && square[9] == '9') {

						square[9] = mark;
						placed = 1;
					}

					else
					{
						choice = rand() % 9;
					}
				}
				i = checkwin(square);
				player++;
				std::cin.get();
				board(square);
			}

			// player 1
			else if (player == 1)
			{
				std::cout << "Players  " << player << ", enter a number:  ";
				std::cin >> choice;
				mark = 'X';

				if (choice == 1 && square[1] == '1')

					square[1] = mark;
				else if (choice == 2 && square[2] == '2')

					square[2] = mark;
				else if (choice == 3 && square[3] == '3')

					square[3] = mark;
				else if (choice == 4 && square[4] == '4')

					square[4] = mark;
				else if (choice == 5 && square[5] == '5')

					square[5] = mark;
				else if (choice == 6 && square[6] == '6')

					square[6] = mark;
				else if (choice == 7 && square[7] == '7')

					square[7] = mark;
				else if (choice == 8 && square[8] == '8')

					square[8] = mark;
				else if (choice == 9 && square[9] == '9')

					square[9] = mark;
				else
				{
					std::cout << "Invalid move ";

					player--;
					std::cin.get();
				}
				i = checkwin(square);

				player++;
			}
		} while (i == -1);
		board(square);
		if (i == 1)

			std::cout << "Congratulation! \nPlayer " << --player << " win ";
		else
			std::cout << "  OOps!\nGame draw";

		std::cin.get();


		void board(char square[])
			; {
			system("cls");
			std::cout << "\n\n\tTic Tac Toe\n\n";

			std::cout << "Player 1 (X)  -  Player 2 (O)" << std::endl << std::endl;
			std::cout << std::endl;

			std::cout << "     |     |     " << std::endl;
			std::cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << std::endl;

			std::cout << "_____|_____|_____" << std::endl;
			std::cout << "     |     |     " << std::endl;

			std::cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << std::endl;

			std::cout << "_____|_____|_____" << std::endl;
			std::cout << "     |     |     " << std::endl;

			std::cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << std::endl;

			std::cout << "     |     |     " << std::endl << std::endl;
		}


		int checkwin(char square[])
			;
		{
		if (square[1] == square[2] && square[2] == square[3])

			return 1;
		else if (square[4] == square[5] && square[5] == square[6])

			return 1;
		else if (square[7] == square[8] && square[8] == square[9])

			return 1;
		else if (square[1] == square[4] && square[4] == square[7])

			return 1;
		else if (square[2] == square[5] && square[5] == square[8])

			return 1;
		else if (square[3] == square[6] && square[6] == square[9])

			return 1;
		else if (square[1] == square[5] && square[5] == square[9])
			return 1;
		else if (square[3] == square[5] && square[5] == square[7])

			return 1;
		else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
			&& square[4] != '4' && square[5] != '5' && square[6] != '6'
			&& square[7] != '7' && square[8] != '8' && square[9] != '9')

			return 0;
		else
			return -1;
	}
	}
