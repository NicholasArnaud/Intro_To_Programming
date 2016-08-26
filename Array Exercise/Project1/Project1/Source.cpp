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
	
	{
		int mn, mx;
		const int Num = 10;
		int a[Num];
		std:: cout << "Enter 10 values:";
		for (int i = 0; i<10; i++)
		{
		std:: cout << "\nEnter value: ";
			std:: cin >> a[i]; 
		}

		mn = a[0];
		mx = a[0];
		for (int i = 1; i<10; i++)
		{
			if (mn>a[i])
			{
				mn = a[i];
			}
			else if (mx<a[i])
			{
				mx = a[i];
			}
		}
		std::cout << "Maximum number is: " << mx <<std:: endl;
		std::cout << "Minimum number is: " << mn <<std:: endl;
}
	//Problem 6
		//int Arr[3][3];

	
	//Problem 6
	/*	int GenerateGrid[3][3];

		void GenerateGrid(int rows, int cols)
			int[rows][cols];
		for (int y = 0, y < rows; y++)
			for  (int x = 0;x<cols;x++)
*/



	std::cout << std::endl;
	system("pause");
}