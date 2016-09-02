#include <iostream>
	int rPow(int x, int y)
	{
		if (y <= 0) return 1;
		return x * rPow(x, --y);
	}
