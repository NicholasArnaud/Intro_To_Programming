#include <iostream>
int main()
{
	std::cout << "Please enter 0-11 for months";
	using std::endl;
	int mon[12];
	mon[0] = 31;
	mon[1] = 29;
	mon[2] = 31;
	mon[3] = 30;
	mon[4] = 31;
	mon[5] = 30;
	mon[6] = 31;
	mon[7] = 31;
	mon[8] = 30;
	mon[9] = 31;
	mon[10] = 30;
	mon[11] = 31;
	int input;
	std::cin >> input;
	if (input < 0)
	{
	std::cout << "There are no negative months";
	}
	else if (input > 11)
	{
		std::cout << "There are only 12 months";
	}
	else if (mon[input])
	{
		printf("%i", mon[input]);
	}
	//not finished
	
	system("pause");
}