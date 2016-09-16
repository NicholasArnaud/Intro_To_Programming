#pragma once


class FunString
{
	char*stringWord;

public:
	FunString(); //basic tool to call functions
	FunString(char*String); //Will save the string to private to prevent permanant change
	
	int Total(); //Will find the length of the string completely until reaches null

};
