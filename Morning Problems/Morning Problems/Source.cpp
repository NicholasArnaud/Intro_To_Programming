#include <iostream>
/*
Day 1
Create a function that takes in three numbers and returns the sun of these numbers 
the sum of these numbers multiplied by 5. (should be able to handle floating and 
integer values)
*/
int setOne();

/*
Day 2
Write a function that takes two parameters a pointer to 
an array and the number of elements 
then populate the array with all even numbers
*/

int setTwo(float a, float b);



//Main
int main()
{
	setOne();
	setTwo();
	system("pause");
	return 1;	
}

//Day 1
int setOne()
{
	float input_1;
	float input_2;
	float input_3;
	float Sum;
	float Total;
	float Multy = 5.0;
	std::cout << "Please input 3 numbers to add " << "\n";
	std::cin >> input_1;
	std::cin >> input_2;
	std::cin >> input_3;
	Sum = input_1 + input_2 + input_3;
	std::cout << "The total of numbers added is: " << Sum << "\n";
	Total = Sum * Multy;
	std::cout << "The total of the numbers multiplied by 5 is: " << Total << "\n";
	return 2;
}


//Day 2
int setTwo(float &a, float &b)
{
	
	int evenOnly[20];
	int*Pointed= &evenOnly[0];
	
	return 2;
}