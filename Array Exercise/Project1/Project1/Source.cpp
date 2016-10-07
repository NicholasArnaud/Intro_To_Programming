#include <iostream>
int main()

{
	
//Problem 1
/*	//Answer 1
		a. Valid
		b. It is trying to declare 7 variables with only 5 spaces declared
		c. Not enough declared variables
		d. Too many comas in between declared variables
		e. Valid
		f. Have to declare an amount of space given
		g. Arrays can not store negative space
		i. Needs to have scope operators
	*/

//Problem 2
/*	//Answer
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
		*/

//Problem 3
//	Write a for loop to initialize the following array(int data[10]) with the values 10, 9, 8�(Etc)

	//Answer
	/*
		int data[10];
		for (int i = 9; i >= 0; i--)
		{
			data[i] = i + 1;
		}
		*/
//Problem 4
/*
			Create a program that asks for 5 numbers from the user,
			and store them in an array.
			Print out the numbers in reverse order
		*/
/*	//Answer
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
	/*
int arr[10];
	for (int i=9; i >= 0; i--)
	{
	std::cin >> arr[i];
	}

	for (int j=0; j < 10; j++) 
	{
		for (int i = 10; i >= 0; i--)
		{


			if (arr[i] < arr[j])
			{
				int smallest = arr[i];
			}
			if (arr[i] > arr[j])
			{
				int biggest = arr[j];
			}
		}
	}
	*/
								

//Problem 6
/*
Create a program that creates a small 3x3 array of integers.
Use a nested for loop to initialise the numbers 1-9.
Output the numbers in a grid format.
*/
/* //Answer
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
								*/

//Problem 7
/*

								An application uses a two dimensional array defined as follows:
								int days[29][5];
								Write code that sums each row in the array and displays the results.
								Write code that sums each column in the array and displays the results.
								*/
/*//Answer 
	int Days[29][5], colTotal[29] = { 0 }, rowTotal[5] = { 0 };
	int x, y;
	std::cout << "All array inputs for each is 5" << std::endl;
	for (x = 0; x < 29; x++)
		for (y = 0; y < 5; y++)

		{

			Days[x][y] = 5;
		}

	for (x = 0; x < 29; ++x)
	{
		for (y = 0; y < 5; ++y)
		{
			colTotal[x] = colTotal[x] + Days[x][y];
		}
	}
	for (x = 0; x < 29; x++)
	{
		std::cout << colTotal[x] << std::endl;
	}


	for (x = 0; x < 29; x++)
	{
		for (y = 0; y < 5; y++)
		{
			rowTotal[y] = rowTotal[y] + Days[x][y];
		}
	}
	for (y = 0; y < 5; y++)
	{
		std::cout << "sum of col is " << rowTotal[y] << std::endl;
	}
*/

//Problem 8
/*
	Create a program that declares an array of 5 integer values. These values will represent the
	health of 5 characters. Initialise the values all to 100. Your program is to ask the user to
	enter a number (0 to 4) to select a character that is to be attacked by a monster. Each attack
	deals 40 damage per attack. If a player�s health gets below 0 then should not be able to be
	attacked. Your program should simulate 5 attacks. After the attacks have finished, output
	the parties� remaining health to the console.
	CHALLENGE: Research random number generation and modify your program so that random
	damage is dealt with each attack.
		*/
/*int Players[5]{ 100,100,100,100,100 };
				int Damage = 40;
				int P;
				Players[P];
				for (int i =0 ; i <= 5; i++)
				{
					std::cin >> P;
					if (P == 1)
					{
						bool(Players[1] >= 0);
						Players[1] = std::abs(Players[1] - Damage);
					}
					else if (P == 2)
					{
						bool(Players[2] >= 0);
						Players[2]=std::abs(Players[2] - Damage);
					}
					else if (P == 3)
					{
						bool(Players[3] >= 0);
						Players[3] = std::abs(Players[3] - Damage);
					}
					else if (P == 4)
					{
						bool(Players[4] >= 0);
						Players[4] = std::abs(Players[4] - Damage);
					}
					else
					{
						bool(Players[0] >= 0);
						Players[0] = std::abs(Players[0] - Damage);
					}
					std::cout << Players[0] << std::endl;
					std::cout << Players[1] << std::endl;
					std::cout << Players[2] << std::endl;
					std::cout << Players[3] << std::endl;
					std::cout << Players[4] << std::endl;
				}*/

//Problem 9
/*
Daenerys Targaryen wants to keep track of how many kilos of food her three dragons eat
each day during a typical week. Write a program that stores this information in a 2
dimensional 3 x 7 array, where each row represents a different dragon and each column
represents a different day of the week. The program should first have Dany input the user
for each dragon. Then it should create a report that includes the following information:
- Average amount of food eaten per day by all the dragons together
- average amount of food eaten per day by any one dragon
- the greatest amount of food eaten during one day and which dragon that was
- the least amount of food eaten during one day and which dragon that was
						
void Array9()
; {
	int dragons[3][7] = {
		{ 25, 23, 23, 21, 15, 5, 1 }, //donray
		{ 33, 12,  5,  5, 10, 25,25 }, //salty
		{ 1 ,  1, 5,  1,  1,  1, 1 }, //bob
	};
	for (int i = 0; i < 3; i++)
	{
		if (i > 0)
			std::cout << std::endl;
		for (int j = 0; j < 7; j++)
		{
			std::cout << dragons[i][j] << " | ";
		}

	}
#pragma region Variables
	//Average amount of food eaten per day by all the dragons together
	float avgPerDayTotal;
	//- average amount of food eaten per day by any one dragon
	float avgPerDayDonray;
	float avgPerDaySalty;
	float avgPerDayBob;
	//- the greatest amount of food eaten during one day and which dragon that was
	int mostFoodEaten = 0;
	int mostFoodEatenID = -1;
	//- the least amount of food eaten during one day and which dragon t
	int leastFoodEaten = 0;
	int leastFoodEatenID = -1;
	//avg is sum of all numbers / how many numbers you added / summed
	float sum = 0;

	float totalDays = 21;
	//make an array with just donrays foods
	int donraysFoods[7]; //dragons[0][0-6]
	int saltysFoods[7]; //dragons[1][0-6]
	int bobFoods[7]; //dragons[2][0-6]
	float donraySum = 0;
	float saltySum = 0;
	float bobSum = 0;
#pragma endregion Variables
	int leastPair[2] = { 0,900 };
	int biggestPair[2] = { 0,0 };
	//sum for all dragons
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			//get the biggest value
			if (dragons[i][j] > biggestPair[1])
			{
				biggestPair[0] = i;
				biggestPair[1] = dragons[i][j];
			}
			if (dragons[i][j] < leastPair[1])
			{
				leastPair[0] = i;
				leastPair[1] = dragons[i][j];
			}
			sum += dragons[i][j];

		}
	}
	//array dump for the dragons from 2d to 1d
	for (int i = 0; i < 7; i++)
	{
		donraysFoods[i] = dragons[0][i];
		saltysFoods[i] = dragons[1][i];
		bobFoods[i] = dragons[2][i];
	}
	//sum for individual dragons
	for (int i = 0; i < 7; i++)
	{
		donraySum += donraysFoods[i];
		saltySum += saltysFoods[i];
		bobSum += bobFoods[i];
	}
	//avg calculations
	avgPerDayDonray = donraySum / 7;
	avgPerDaySalty = saltySum / 7;
	avgPerDayBob = bobSum / 7;
	avgPerDayTotal = sum / totalDays;
	//output stuff to user
	std::cout << "sum: is " << sum << std::endl;
	std::cout << "average per day total  is " << avgPerDayTotal << std::endl;
	std::cout << "donray the depressed dragon \n average eaten per day is" << avgPerDayDonray << std::endl;
	std::cout << "salty average eaten per day is " << avgPerDaySalty << "\n";
	std::cout << "bob average eaten per day is " << avgPerDayBob << "\n";
	std::cout << "least food eaten dragon is " << leastPair[0] << " ate " << leastPair[1] << std::endl;
	std::cout << " most food eaten dragon is " << biggestPair[0] << " ate " << biggestPair[1] << std::endl;


}*/
		system("pause");
		}