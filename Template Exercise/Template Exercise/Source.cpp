#include <iostream>


/*
Min
DESCRIPTION: Returns the lower of two values.
INPUT: Two template arguments (a, b).
OUTPUT: The lower of the two values a and b.
*/
template <typename A>
A Min(A a, A b)
{
	if (a < b)
	{
		return a < b;
	}
	else if (a > b)
	{
		return b < a;
	}
	else
	{
		return a;
	}
}


/*
Max
DESCRIPTION: Returns the higher of two values.
INPUT: Two template arguments (a, b).
OUTPUT: The higher of the two values a and b.*/
template <typename A>
A Max(A a, A b)
{
	return a > b;
}


/*
Clamp
DESCRIPTION: Constrains a value within the range of two other values.
INPUT: Three template arguments (min, max, val).
OUTPUT: The value of the val constrained between min and max. 
*/
template <typename A>
A Clamp (A min, A max, A val)
{
	if (min > val)
	{
		val = min;
	}
	if (max < val)
	{
		val = max;
	}
	return val;
}


/*
Min (specialised for char)
DESCRIPTION: As above but first checks if a and b represent alphabetical characters. If so,
the function will return the value that is alphabetically lower.
INPUT: Two template arguments (a, b).
OUTPUT: The alphabetically lower of the two values a and b
*/
template <typename T>
T Max(T a, T b)
{
	


	return ;
}


/*
Max (specialised for char)
DESCRIPTION: As above but first checks if a and b represent alphabetical characters. If so,
the function will return the value that is alphabetically higher.
INPUT: Two template arguments (a, b).
OUTPUT: The alphabetically higher of the two values a and b.
*/
template <typename T>
T Min(T a, T b)
{
	
	return ;
}





int main()
{
	Min<int>(12, 10);
	Max <int>(15, 11);
	Clamp<int>(0 ,0, 0);
	Min<char>('l', 'm');
	Max<char>('j', 'z');
	return 1;
}