#include <iostream>
#include "FunString.h"

int FunString:: Total()
{
int i = 0;
for (;  m_String[i] != 0; i++);
std::cout << "Number of characters in the string is: "<< i << "\n"; // displays the number of characters in string
return i; //returns number of characters in string
}

int FunString::indexedChar()
{
	int j = 0;
	std::cout <<"First character in the string is: " << m_String[j] << "\n"; //Displays first character in String
	return 2;
}

bool FunString::Compared()
{
	std::cout << "First string is : " << m_String << "\n" << "The second string is : " << m_String2<< "\n";
	if (m_String == m_String2)
	{
		std::cout << "The two strings are very much alike \n";
	return true;
	}
	else
	{
		std::cout << "The two strings are not similar at all \n";
		return false;
	}
}
void FunString::Append()
{
	
}
void FunString::Prepend()
{

}
char FunString::c_Style()
{
	int i = 0;
	for (; m_String[i] != 0; i++);
		char Array['i'];
		Array[i] = m_String['i'];
std:: cout << Array << "\n"; //currently not fully operational
	return i;
}
void FunString::upperCase()
{
	char n;
	int l = 0;
	while (m_String[l])
	{
		l = m_String[l];
		putchar(toupper(n));
		l++;
	}
}
void FunString::lowerCase()
{
	char o;
	int k = 0;
	while (m_String[k])
	{
		k = m_String[k];
		putchar(tolower(o));
		k++;
	}
}