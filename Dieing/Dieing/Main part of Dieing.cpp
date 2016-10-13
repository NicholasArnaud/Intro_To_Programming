#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <stdlib.h>
#include <string>


int R_P_S()
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


		if (playerPick == "q")
		{
			break;
		}


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


	} while (std::cin.get());
	std::cin.get();
	return 1;

}

int C_F()
{
	for (;;)
	{
	int input;
	std::cout << "place how many times to flip coin \n";
	std::cin >> input;

	
		if (input == 'q')
			{
				break;
			}
		for (int i = 0; i < input; i++)
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
		
	}
		return 1;
}

int D_R()
{
	int computer = 0;
	bool complete = false;
	computer = rand()% 6 + 1;
	int dice;
	while (!complete)
		{


			std::cout << "Press '1-6' to roll the die." << std::endl;
			std::cin >> dice;



				if (dice == computer)
				{
					std::cout << "You rolled a :" << dice << std::endl;
					std::cout << "Tie" << std::endl;
					std::cout << "Try again?" << std::endl;
				}
				else
					if (dice > computer)
					{
						std::cout << "You rolled a :" << dice << std::endl;
						std::cout << "You rolled high" << std::endl;
						std::cout << "You Win! \n Try again?" << std::endl;
					}
					else
					{
						std::cout << "You rolled a :" << dice << std::endl;
						std::cout << "Rolled too low" << std::endl;
						std::cout << "Try again?" << std::endl;
		if (dice == 'q')
				{
					complete = true;
				}
			}
		
	}
	return 1;
}

int main()
{
	char input;
	int rand();
	std::cout << "Press 'm' for menu" << std::endl;
	std::cin >> input;
	for (;;)
	{
		if (input == 'm')
		{
			std::cout << "Press 'a' to play Rock, Paper, Scissers \n \n";
			std::cout << "Press 'b' to play Coin Flip \n \n";
			std::cout << "Press 'c' to Play Dice Roll \n \n";
			std::cout << "Press 'q' to quit playing \n \n";
		}
		std::cin >> input;
		if (input == 'a')
		{
			R_P_S();
			break;
		}

		if (input == 'b')
		{
			C_F();
			 break;
		}

		if (input == 'c')
		{
			D_R();
			break;
		}
		if (input == 'q')
		{
			break;
		}
	}
system("pause");
}