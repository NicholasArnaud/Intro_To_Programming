#include <iostream>
#include <cstdlib>
#include <time.h>
float Half(float);
float wordNow();
int Rand = 0;
int whatEver;
int i;


//Problem 1
void Printer(int variable)
{
	std::cout << variable << std::endl;
}
/*
int main()
{
	int Three = 1;
	Printer(Three);
	{
		Printer(Three);
		int One = 2;
		Printer(One);
		{
			Printer(One);
			int Two = 3;
			Printer(Two);

		}
		Printer(One);
	}
	Printer(Three);
	system("pause");
	return 0;
	*/
	//outputs: 1122321



//Problem 2
/*
Write a function that returns the smaller of two floats that are passed to it :
//You should make a program that asks the user for two different numbers such that it
//outputs : Enter value 1: 10.6
//		Enter Value 2:-67.8
//Pass the two numbers into a function and output what the function returns :
//		The smaller number is: -67.8
*/
float wordNow()
{
		float value1;
		float value2;
std::cout << std::endl;
		std::cin >> value1 >> value2;
		if (value1 > value2)
		{
			std::cout << "The smaller number is:" << value2;
std::cout << std::endl;
		}
		else if (value1 < value2)
		{
			std::cout << "The smaller number is:" << value1;
std::cout << std::endl;
			return value1;
		}
	}

//Problem 3 Incomplete



//Problem 4 
/*
The following statement calls a function named Half.The Half function returns a value that
is half that of the argument.Write the function.
*/
float Half(float numb)
{
	return numb/2;
}

//Problem 5
/*
Write a function named CoinToss that simulates the tossing of a coin.
The function should use the standard library rand() function in order to generate a
display of either “heads” or “tails”. The rand() can be added by adding #include <cstdlib>
to the top of your program. It returns a random number between 0 and 32767.
Demonstrate the function in a program that asks the user how many times they want to
toss the coin, and then simulates the tossing of the coin that number of times.
*/
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


//Problem 6

/*Find the error in each of the following functions 
and explain how to fix them.
*/

int sum(int x, int y) //needs ";"
{
	//"x,y" is not defined, can input here "x=1" & "y=2"
	int result;
	result = x + y;
}

int sum(int n) //needs ";"
{
	//"n" is not defined, can input here "int n=1"
	if (0 == n)
		return 0;
	else
		n = n + n;
}

#include <iostream>
int main()
{
	double x = 13.6;
	//square is not defined, can use "float square()"
	// "x" has too many arguments in function call 
	std::cout << "square of 13.6 = " << square(x) << std::endl;
}

int square(int x) //change "int square(int x)" to "float square(int x)
{
	return x * x;
}

//Problem 7

#include <iostream>
for SumTo(int N = 0; N >= 1; N++)
{

}
int main()
{
	int result = SumTo(3); //result = 1 + 2 + 3 = 6
	std::cout << result << std::endl;
	result = SumTo(15); //result should now be 120
	std::cout << result << std::endl;
}




int main()
{
	float stuff = wordNow();
	float more = Half(16.721);
	std::cin >> Rand;
	CoinToss();
	std::cout << "\n";
	system("pause");
	return 0;
	
}