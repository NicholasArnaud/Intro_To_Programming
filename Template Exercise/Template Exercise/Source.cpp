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
OUTPUT: The higher of the two values a and b.
*/
template <typename A>
A Max(A a, A b)
{
	return (a > b) ? a : b;
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
char Maxt(char a, char b)
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
Max (specialised for char)
DESCRIPTION: As above but first checks if a and b represent alphabetical characters. If so,
the function will return the value that is alphabetically higher.
INPUT: Two template arguments (a, b).
OUTPUT: The alphabetically higher of the two values a and b.
*/
char Mint(char a, char b)
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








template <typename Template>
class Arrays
{
	/*
Constructor
DESCRIPTION: Creates an array on the heap of the specified capacity. The new heap
memory should be zeroed using memset. You should store the value of
capacity and size for later use (size should start at 0).
INPUT: A single integer specifying the capacity for the data array.
OUTPUT: N/A.
*/
	Template *Array;
	int index;
public:
	
/*
	Constructor
DESCRIPTION: Creates an array on the heap of the specified capacity. The new heap
memory should be zeroed using memset. You should store the value of
capacity and size for later use (size should start at 0).
INPUT: A single integer specifying the capacity for the data array.
OUTPUT: N/A.
*/
	template <typename Template>
	Arrays() 
	{
		Array[12];
		index = 0;
	};
	
/*
Deconstructor
DESCRIPTION: Deletes the data pointed to on the heap.
INPUT: N/A.
OUTPUT: N/A.
*/

~Arrays() {};

/*
Add
DESCRIPTION: Adds an item to the next empty array location (you should be able to use the
size value as an index to the next free location). Before adding the new item
to the array, we should check if there is room and call Expand if not.
INPUT: One template arguments (item).
OUTPUT: None.
*/
	template <typename Template>
	void Add(Template item)
	{
		if (Array[Max - 1] != '\0')
		{
			Array[index] = item;
			index++;

		}
		else
		{
			Expand();
		}
	}
/*
Expand
DESCRIPTION: Doubles the capacity of the data array by creating a new array on the heap
with twice the current capacity, and then copying the data from the current
array into the new array using memcpy. (Be sure to delete the old memory!)
INPUT: None.
OUTPUT: None.
*/
	template <typename Template>
	void Expand()
	{
		Array[Max * 2];
	}
/*
Operator []
DESCRIPTION: Returns an item from the array at a specified index (like a regular subscript).
INPUT: A single integer specifying the array-index of the item to return.
OUTPUT: A copy/reference (your choice) of an item from the data array.
*/

};




int main()
{
	Min<int>(12, 10);
	Max <int>(15, 11);
	Clamp<int>(0 ,0, 0);
	Min('l', 'm');
	Max('j', 'z');
	
	return 1;
}