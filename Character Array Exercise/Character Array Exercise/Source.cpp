#include <iostream>
#include <time.h>
#include <string>


/*
Problem 1
Create a program that asks for the user’s first and last name and store it in one string. It
must be able to handle spaces in the input.
*/
int Name()
{
	char name[40];
	std::cout << "please enter your full name : " << "\n";
	std::cin.getline(name, 39);
	std::cout << "hello " << name <<std:: endl;

/*
Problem 2
Output the name in reverse order
*/

	std::string Name = name;
	std::string Reverse = Name;
	std::reverse(Reverse.begin(), Reverse.end());
	std::cout << Reverse << "\n";

	return 1;
}
/*
. Modify the program to take in 5 names and print them out in reverse order too. You will
need to us a 2D character array for this.
*/

int many_Names()
{
	const int Names = 5;
	const int Char = 40;
	char Name_ID[Names][Char];
	std::cout << "Enter five names:" <<std:: endl;
	for (int i = 0; i<Char; i++)
		std::cin >> Name_ID[i][Char];
	std::cout << Name_ID;
	return 2;
}
/*
Research and find out what character code causes your computer to beep
*/
int Noise()
{
	std::cout << (char)7 <<std:: endl;
	return 3;
}

/*
Create a program that allows the user to enter a user name and password. Ensure the
password is at least 8 characters long and contains at least one capital letter, at least one
number and at least one symbol.
*/
int UsPa()
{
	char UserN[20];
	char PassW[9];
	std::cout << "Please Enter UserName \n";
	std::cin >> UserN;
	std::cout << "\n";
	std::cout << "Now Enter Password \n";
	std::cin >> PassW;
	std::cout << "\n";
	if (PassW == "Password")
	{
		std::cout << "Welcome"<< "\n";
	}
	else
	{
		std::cout << "No Entry Allowed"<< "\n";
	}
	return 4;
}


int main()
{
	int Input;
	std::cout << "press a number for a certian exercise problem \n";
	std::cin >> Input;
	if (Input == 1)
	{
Name();
	}
	if (Input == 2)
	{
many_Names();
	}
	if (Input == 3)
	{
Noise();
	}
	if (Input == 4)
	{
UsPa();
	}

system("pause");
}