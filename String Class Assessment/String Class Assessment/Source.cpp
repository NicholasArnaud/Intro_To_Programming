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
void FunString::c_inStyle()
{
	for (int index = 0; index < sizeof(m_String); ++index)
	{
std::cout << static_cast<int>(m_String [index]) << "\n";
	}
		
}