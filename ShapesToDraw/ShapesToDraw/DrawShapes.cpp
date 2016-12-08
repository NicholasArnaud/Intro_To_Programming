#include "Shapes.h"
#include <iostream>


Point::Point(float x, float y)
{
	float X = x;
	float Y = y;
}
int main()
{

	Point * pointA = new Point(2, 3);

	pointA->DebugPrint();

	

	return 1;
}