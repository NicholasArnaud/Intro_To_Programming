#include <iostream>
#include <stdlib.h>
#include <time.h>
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
		printf("Help");
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
		std::cout << "Enter a simple math problem";
		std::cin >> a >> doom >> b;
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
		case '%':
			std::cout << a % b;
		default:
			break;

		}
		std::cout << "\n";

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
	system("pause");
	return 0;
}