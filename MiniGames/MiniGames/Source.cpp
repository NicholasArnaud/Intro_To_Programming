#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
int main()
{
	char input;
	int rand();
	std::cin >> input;

	if (input == 'm')
	{
		std::cout << "Press 'a' to play Rock, Paper, Scissers \n";
		std::cout << "Press 'b' to play Coin Flip \n ";
		std::cout << "Press 'c' to Play Dice Roll";
		std::cout << "Press 'd' to Play Tic-Tac-Toe";
		std::cout << "Press 'q' to quit playig";
		system("pause");
		return 1;
	}
	switch (input)
		case 'a'
	{
		for ( )
	}
	case 'b'
	{

	}
	while (input != 'q')
	{
		int 
		if  ()
	


		if (input == 'q')
		{
			std::cout << "Thanks for Playing";
			break;
		}

	}
	system("pause");
}






// coin toss
int CoinToss()
{

	for (int i = 0; i < Rand; i++)
	{
		whatEver = rand();
		if (whatEver % 2 == 0)
		{
			std::cout << "Tails" << std::endl;
		}

		else
		{
			std::cout << "Heads" << std::endl;
		}
	}
	return 0;
}






// rock paper scissors
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string>

int main()
{
	do {


		std::string playerPick;

		int computer;

		std::cout << "rock, paper, or scissors?" << std::endl;
		std::cout << " " << std::endl;

		std::cin >> playerPick;

		std::cout << "You entered: " << playerPick << std::endl;
		std::cout << " " << std::endl;

		srand(time(NULL));

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
	} while (std::cin.get());

	std::cin.get();
	return 0;
}
