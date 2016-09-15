#include <iostream>
#include <string>
#include "FunString.h"


int Utility::Utilitybigguy()
{
	bool smallguy = true;
	char flocka[] = "warfstache";
	int i = 0;
	flocka[i];
	strlen(flocka);
	while (smallguy = true)
	{
		if (flocka[i] == 0)
		{
			break;
		}
		i++;
	}
	std::cout <<"Lenght of array is"<< i<< "\n";
	return 0;
}



int main()
{
	Utility newUtil;
	newUtil.Utilitybigguy();

	system("pause");
	return 1;	
}