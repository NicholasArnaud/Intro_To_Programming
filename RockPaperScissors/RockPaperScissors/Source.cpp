#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include "Source.h"

class Application
{
public:
	virtual void Start() = 0;
	void Run();
	virtual void ShutDown() = 0;
	Application();
	~Application();
	virtual void Update() = 0;
	bool Gameover = false;
};


class RockPaperScissors : public Application
{
public:

	void Start()
	{
		printf("RockPaperScissors, Instructions...");
	}
	void Update()
	{

		while (Gameover != true)
		{


			std::string playerPick;
			int computer = 0;
			int srand = 0;

			std::cout << "rock, paper, or scissors?" << std::endl;
			std::cout << " " << std::endl;

			std::cin >> playerPick;
			if (playerPick == "q")
			{
				ShutDown();
				break;
			}

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
		}
	}
	void ShutDown()
	{
		Gameover = true;
	}
};

class Calculator : public Application
{
public:
	void Start()
	{
		printf("welcome to the calculator Game, AIE is a game school...");
	}
	void Update()
	{
		int a;
		int b;
		char doom;
		char exit;
		std::cout << "\n";
		std::cin >> exit;
		if (exit != 'q')
		{
			std::cin >> exit;

			std::cout << "Enter a simple math problem";
			std::cout << "\n";


			std::cin >> a >> doom >> b;
			if (doom == 'q')
			{
				Gameover = true;
				ShutDown();
			}

			switch (doom)
			{
			case '+':
				std::cout << a + b;
				break;

			case '-':
				std::cout << a - b;
				break;
			case '*':
				std::cout << a*b;
				break;
			case '/':
				std::cout << a / b;
				break;
			case '%':
				std::cout << a % b;
				break;
			default:
				break;
			}
			std::cout << "\n";
		}
		if (exit == 'q')
		{
			ShutDown();
		}
	}

	void ShutDown()
	{
		Gameover = true;
	}
};


Application::Application()
{
}

Application::~Application()
{
}

void Application::Run()
{
	while (!Gameover)
	{
		Update();
	}
	ShutDown();
}



int main()
{

	Application*app = new Calculator;
	app->Start();
	app->Run();
	system("pause");
	Application*RPS = new RockPaperScissors;
	RPS->Start();
	RPS->Run();
	system("pause");
	return 0;
}