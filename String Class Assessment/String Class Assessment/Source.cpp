#include <iostream>
#include "FunString.h"

int FunString::Total()
{
int i = 0;
for (;  m_String[i] != 0; i++);// loop runs until "i" reaches the null character of the string m_String
std::cout << "Number of characters in the string is: "<< i << "\n"; // displays the number of characters in the string m_String
Strlen = i; //saves the length of the length of first string
return Strlen; //returns number of characters in string
}
int FunString::indexedChar()
{
	int j = 0; // places a spot in the string index for one character
	std::cout <<"First character in the string is: " << m_String[j] << "\n"; //Displays first character in String
	return 2;
}
bool FunString::Compared() //compares two strings
{
	std::cout << "First string is : " << m_String << "\n" << "The second string is : " << m_String2<< "\n"; // displays current valid 2 strings that will be used
	if (m_String == m_String2)	// if statement used to find a difference between 2 inputed strings
	{
		std::cout << "The two strings are very much alike \n"; // displays that the 2 strings are in fact similar
	return true; // bool function becomes true and breaks from function
	}
	else  // else segment runs if comparison between the 2 strings are different in any way
	{
		std::cout << "The two strings are not similar at all \n"; // displays that the 2 strings are not similar to each other
		return false;	// bool function becomes false and function ends
	}
}  
void FunString::Append()
{
	// currently unoperational
	// will later add a second string after the first string and become one string together
}
void FunString::Prepend()
{
	int i;
	for (i = 0; i < Strlen; i++)
		m_String2[i] = m_String[i];

	// currently unoperational
	// will later add a second string before the first string and become one string together
}
void FunString::c_Style()
{
	const char* constString = m_String;	// creates a const character pointer towards the original string
	std::cout << "const char*: " << constString<< "\n";	// displays the new const character string 
}
void FunString::lowerCase()
{

}
void FunString::upperCase()
{

}
void FunString::subStrLoc()
{
	int i, j, temp;	//used to get index given string and arrays
	char substr[20] = { "ow" }; //sets the substring
	std::cout << "Looking for the substring : " << substr<< "\n"; //shows what the substring is to the user
	for (i = 0; m_String[i] != '\0'; i++) //for loop to search string for the substring
	{
		j = 0; //used to index the substring
		if (m_String[i] == substr[j]) //if indeed the string contains the substring
		{
			temp = i + 1; //saves at what index the substring is located 
			while (m_String[i] == substr[j]) //continues as long as both strings dont equal to the null character
			{
				i++;
				j++;	
			}

			if (substr[j] == '\0') //if the substring is found in the string
			{
				std:: cout << "The substring is present in given string at position " << temp << "\n"; //displays location of substring found
			}
			else //if the subtring is not found
			{
				i = temp;
				temp = 0; //causes break loop
			}
		}
	}

	if (temp == 0) //breaks the loop 
		std:: cout << "The substring is not present in given string";
}
void FunString::c_inStyle()
{
	for (int index = 0; index < Strlen; ++index) //measures the length of the string to set index 
	{
static_cast<int>(m_String [index]); //casts a C-styled string as a constant character string
	}		
}