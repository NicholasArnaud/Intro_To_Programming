#pragma once


class FunString
{
	 char *m_String; //string one
	 char *m_String2; //string two
	 char *m_Appended; //string one then two
	 int Strlen; //first strings length
	 char *prepended; //string two then one
public:
	FunString() {}; //basic tool to call functions
	FunString(char *String, char *sString) { m_String = String, m_String2 = sString;}; //Will save the string to private to prevent permanant change
	int Total(); //Will find the length of the string completely until reaches null
	int indexedChar(); //Will pick a character in a string
	bool Compared(); //Will compare 2 strings together 0.
	void Append(); //Will add the second string after the first string
	void Prepend(); //Will add the second string before the first string
	void c_Style(); // Will write the string c-styled	
	void upperCase(); //Will change string characters into uppercase characters
	void lowerCase(); //Will change string characters into lowercase characters
	void c_inStyle();	//Will set string to input C-style string
};
