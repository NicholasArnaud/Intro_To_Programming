#include <iostream>
int main()
{

	/*
	Problem 1;

	a. Valid
	b. It is trying to declare 7 variables with only 5 spaces declared
	c. Not enough declared variables
	d. Too many comas in between declared variables
	e. Valid
	f. Have to declare an amount of space given
	g. Arrays can not store negative space
	i. Needs to have scope operators
	*/

	/*

	//Problem 2
		int value[] = { 2,6,10,14 };
		std::cout << value[2] << std::endl;
		// a. 10
		std::cout << ++value[0]<<std::endl;
		// b. 3
		std::cout << value[1]++ << std::endl;
		// c. 6
		int x = 2;
		std::cout << value[++x]<<std::endl;
		// d. 14
		std::cout << value[4] << std::endl;
		// e. Error


	//Problem 3

		int data[10];
		for (int data = 10; data > 0; data--)
			std::cout << data << std::endl;

		
		//Problem 4
		/*
		Create a program that asks for 5 numbers from the user,
		and store them in an array. 
		Print out the numbers in reverse order
		*/
/*
	int arr[5];
	int i;
	std::cin >> arr[0];
	std::cin >> arr[1];
	std::cin >> arr[2];
	std::cin >> arr[3];
	std::cin >> arr[4];
	std:: cout<< std:: endl;
	for (int i = 4; i >= 0; i--)
	{
		std::cout << arr[i] << std::endl;
	}
	*/

	//Problem 5
	/*
	Write a program that lets the user enter 10 values into an array. 
	The program should then display the largest 
	and smallest values stored in the array.
	*/
	/*int arr[10];
	int i;
	for (i=9; i >= 0; i--)
	{
		std::cin >> arr[i];
	}
	if (arr[i] )
	*/
	//Problem 6
	/*
	Create a program that creates a small 3x3 array of integers.
	Use a nested for loop to initialise the numbers 1-9.
	Output the numbers in a grid format.
	*/
	int Arr[3][3];
	int number = 1;
	for (int numA=0; numA < 3;numA++)
	{
		std::cout <<std:: endl;
		for (int numB = 0; numB < 3; numB++)
		{ 
			Arr[numA][numB] = number;
			number++;
			std::cout << Arr[numA][numB];
		}
	}
	
	//Problem 7
	/*
	
	An application uses a two dimensional array defined as follows:
int days[29][5];
Write code that sums each row in the array and displays the results.
Write code that sums each column in the array and displays the results.
*/

	std::cout << std::endl;
	system("pause");
}