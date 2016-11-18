#include <iostream>
//Create a function that takes in an array and the size of the array and return the sum of the two largest values in the array.
//int LargestValue(int value[], int size);

// Create a function that takes in two number and returns the product. You cannot use multiplication.
float product(float a, float b);



int main()
{
	/*int blah[5] = { 2,3,15,9 };
	int a = LargestValue(blah, 5);
*/
	float j = product(9, 9);
	system("pause");
	return 1;
}

int LargestValue(int value[], int size)
{
	int Largest = 0;
	int Second = 0;
	for (int i = 0; i < size; i++)
	{
		if (Second < value[i])
		{
			Second = value[i];
		}

		if (Second > value[i] && Largest < Second)
		{
			Largest = Second;
		}
	}
	Second = 0;
	for (int i = 0; i < size; i++)
	{

		if (Second < value[i] && Largest != value[i])
		{
			Second = value[i];
		}
	}
	return Largest + Second;
}

float product(float a, float b)
{
	float sum = 0;
	for (int i=0; i < b; i++)
		sum += a;
	return sum;
}

