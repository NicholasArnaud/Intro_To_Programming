#include <iostream>
int main()
{
	/*
	//Answer 1; Problem 1
	int x;
	int y = 0;
	if (int y = 0);
	{
		x = 100;
	}
	std::cout << x;
	system("pause");
	return 0;


	//Answer 2; Problem 2
	int sml;
	int big;
	std::cin >> sml >> big;
	if (sml < big)
	{
		std::cout << big << std::endl;
	}
	else if (sml > big)
	{
		std::cout << sml << std::endl;
	}

	system("pause");
	return 0;
	*/
	/*
	//Answer 3; Problem 3
	int num[5];
	int i = 0;
	num[i] = 0;
	for(i=0;i<100;i++)
	std::cout << num[i];

	for (int i = 0; i < 100; i++)
	{

	}
	*/

	/*
	Answer 4; Problem 4
	int choice;
	std::cin >> choice;
		switch (choice)
		{
		case 1:
				std::cout << "1";
			break;
		case 2:
				std::cout << "2 or 3";
			break;
		case 3:
			std::cout << "4";
		default:
			std::cout << "Invalid";
			break;
		}
		system("pause");

	//Answer 5; Problem 5
	
	int x;
	std::cin >> x;
	int y = (x == 0) ? 0 : 10 / x;
	system("pause");
	*/

	//Answer 6; Problem 6
	
	int a;
	int b;
	char doom;
	std::cin >> a >> doom >> b;
	switch ((int)doom)
	{
	case 1:
		std::cout << a + b;
		break;

	case 2:
		std::cout << a - b;
		break;
	case 3:
		std::cout << a*b;
		break;
	case 4:
		std::cout << a / b;
	case 5:
		std::cout << a%b;
	default:
		;
		system("pause");
	}

	//Answer 7; Problem 7

	


}