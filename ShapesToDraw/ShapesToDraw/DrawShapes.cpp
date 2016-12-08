#include "Shapes.h"
#include <iostream>






int main()
{

	Point pointA(2, 3);
	pointA.DebugPrint();
	
	Line lineA(4, 6, 1, 5);
	lineA.DebugPrint();

	Triangle triangleA(1, 3, 3, 5, 2, 4);
	triangleA.DebugPrint();
	
	Rectangle rectangleA(1, 2, 1, 3, 2, 3, 2, 4);
	rectangleA.DebugPrint();

	return 1;
}