#pragma once


class FunString
{
	 char *m_String; //string one
	 char *m_String2; //string two
	 char *m_Appended; //string one then two
public:
	FunString() {}; //basic tool to call functions
	FunString(char *String, char *sString) { m_String = String, m_String2 = sString;}; //Will save the string to private to prevent permanant change
	int Total(); //Will find the length of the string completely until reaches null
	int indexedChar(); //Will pick a character in a string
	bool Compared(); //Will compare 2 strings together 0.
	void Append(); //Will add the second string after the first string
	void Prepend();
	char c_Style();
};
