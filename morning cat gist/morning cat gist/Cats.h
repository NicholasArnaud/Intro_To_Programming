#pragma once

class Cat
{
private:
	char m_Name;
public:
	Cat(){}
	void NameMe(char n)
	{
		m_Name = n;
	}
};
Cat CatArray[26];

int NameCat()
{
	int i = 0;
	while (i != 26)
	{
		int first = 65;
		if (i %= 0)
		{
	char m_Name = first + i;
		CatArray[i].NameMe(i) = m_Name; //not syntactically correct 
		}
		else
		{
			char m_Name = first + i + 32;
			CatArray[i].NameMe = m_Name;
		}
	
		i++;
	}
}