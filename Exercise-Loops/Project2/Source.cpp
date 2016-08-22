#include <iostream>
int main()
{
	//#1 part 1

	int i;
	for (i= 100; i >= 0; i--)
	{
		std::cout << i;
	}


	//#1 part 2

	int i;
	for (i = 99; i >= 0; i--)
	{
		std::cout << i;
	}


	//#1 part 3

	int i;
	for (i = 100; i >= 1; i--)
	{
		std::cout << i;
	}


	//#1 part 4

	int i;
	for (i = 100; i >= 0; i=i-2)
	{
			std::cout << i;
	}



	//#2
	
	int i;
	for (i = 0; i <= 100; i ++)
		if (i % 3 && i % 5 == 0)
		{
			std::cout << "FizzBuzz";
			std::cout << "\n";
		}
		else if (i % 3 == 0)
		{
			std::cout << "Fizz";
			std::cout << "\n";
		}
		else if (i % 5 == 0)
		{
			std::cout << "Buzz";
			std::cout << "\n";
		}
		else if (i % 3 && i % 5 != 0)
		{
			std::cout << i;
			std::cout << "\n";
		}


	//#3

	int i;
	int sum=0;
	for (i = 1; i < 1000; i++)
	{
		if (i % 3 == 0)
		{
			std::cout << i;
			sum += i;
		}
		else if (i % 5 == 0)
		{
			std::cout << i;
			sum += i;
		}
	}
	std::cout << "\n";
	printf("%i", sum);
	


	//#4 part 1; A

	int i = 100;
	while (i >= 0)
	{
		std::cout << i << "\n";
		i--;
	}


	//#4 part 1; B

	int i = 99;
	while (i >= 0)
	{
		std::cout << i << "\n";
		i--;
	}


	//#4 part 1; C

	int i = 100;
	while (i >= 1)
	{
		std::cout << i << "\n";
		i--;
	}


	//#4 part 1; D

	int i = 100;
	while (i >= 1)
	{
		std::cout << i << "\n";
		i=i-2;
	}
	

	//#4 part 2

int i = 0;
while (i <= 100)
{

	if (i % 3 && i % 5 == 0)
	{
		std::cout << "FizzBuzz";
		std::cout << "\n";
	}
	else if (i % 3 == 0)
	{
		std::cout << "Fizz";
		std::cout << "\n";
	}
	else if (i % 5 == 0)
	{
		std::cout << "Buzz";
		std::cout << "\n";
	}
	else if (i % 3 && i % 5 != 0)
	{
		std::cout << i;
		std::cout << "\n";
	}
	i++;
}


	//#4 part 3

int i= 0;
int sum = 0;
while (i < 999)
{
	i++;
	if (i % 3 == 0)
	{
		std::cout << i;
		sum += i;
	}
	else if (i % 5 == 0)
	{
		std::cout << i;
		sum += i;
	}
	
}
std::cout << "\n";
printf("%i", sum);

system("pause");
}