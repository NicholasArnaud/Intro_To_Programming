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
	std::cout << "Press 'm' for menu" << std::endl;
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



	// dice roll
	if (input == 'c' && input != 'q')
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
	void showBoard();
	void player_turn();
	bool gameover();

	char turn;
	bool draw = false;
	char board[3][3] = { { '1', '2', '3' },{ '4', '5', '6' },{ '7', '8', '9' } };

	int main()
	{
		std::cout << "Tic Tac Toe Game\n";
		std::cout << "Player 1 [X] --- Player 2 [O]\n";
		turn = 'X';

		while (!gameover())
		{
			showBoard();
			player_turn();
			gameover();
		}

		if (turn == 'O' && !draw)
		{
			showBoard();
			std::cout << std::endl << std::endl << "Player 1 [X] Wins! Game Over!\n";
		}
		else if (turn == 'X' && !draw)
		{
			showBoard();
			std::cout << std::endl << std::endl << "Player 2 [O] Wins! Game Over!\n";
		}
		else
		{
			showBoard();
			std::cout << std::endl << std::endl << "It's a draw! Game Over!\n";
		}
		system("pause");
	}

	void showBoard()
	{
		std::cout << "---------------------" << std::endl << std::endl;
		std::cout << "     |     |     " << std::endl;
		std::cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << std::endl;
		std::cout << "_____|_____|_____" << std::endl;
		std::cout << "     |     |     " << std::endl;
		std::cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << std::endl;
		std::cout << "_____|_____|_____" << std::endl;
		std::cout << "     |     |     " << std::endl;
		std::cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << std::endl;
		std::cout << "     |     |     " << std::endl;
	}

	void player_turn()
	{
		int choice;
		int row = 0, column = 0;

		if (turn == 'X')
		{
			std::cout << "Player 1 turn [X]: ";
			std::cin >> choice;
		}
		else if (turn == 'O')
		{
			std::cout << "Player 2 turn [O]: ";
			srand(time(NULL));
			choice = rand() % 9 + 1;
			srand(1);
		}


	//	switch (choice)
	//	{
	//	case 1: row = 0; column = 0; break;
	//	case 2: row = 0; column = 1; break;
	//	case 3: row = 0; column = 2; break;
	//	case 4: row = 1; column = 0; break;
	//	case 5: row = 1; column = 1; break;
	//	case 6: row = 1; column = 2; break;
	//	case 7: row = 2; column = 0; break;
	//	case 8: row = 2; column = 1; break;
	//	case 9: row = 2; column = 2; break;
	//	default:
	//		std::cout << "You didn't enter a correct number! Try again\n";
	//		player_turn();
	//	}

	//	if (turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O')
	//	{
	//		board[row][column] = 'X';
	//		turn = 'O';
	//	}
	//	else if (turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O')
	//	{
	//		board[row][column] = 'O';
	//		turn = 'X';
	//	}
	//	else
	//	{
	//		std::cout << "The cell you chose is used! Try again\n";
	//		player_turn();
	//	}

	//}

	//bool gameover()
	//{
	//	for (int i = 0; i < 3; i++)//Check for a win
	//	{
	//		if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) || (board[0][i] == board[1][i] && board[1][i] == board[2][i]) || (board[0][0] == board[1][1] && board[1][1] == board[2][2]) || (board[0][2] == board[1][1] && board[1][1] == board[2][0]))
	//		{
	//			return true;

	//		}
	//	}

	//	for (int i = 0; i < 3; i++)//Check for draw
	//	{
	//		for (int j = 0; j < 3; j++)
	//		{
	//			if (board[i][j] != 'X' && board[i][j] != 'O')
	//			{

	//				return false;

	//			}
	//		}
	//	}
	//	draw = true;
	//	return true;

	//}
