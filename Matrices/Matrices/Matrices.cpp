#include <iostream>
#include <math.h>
#include <cassert>
#include "Classes.h"






int main()
{
	//////////////////////////////////////////////////
	//					VECTORS						//
	//////////////////////////////////////////////////

	Vector2D A = Vector2D(1, 0);
	Vector2D  B = Vector2D(0, 1);

	assert(A + B == Vector2D(1, 1));
	assert(A - B == Vector2D(1, -1));
	assert(A * B == Vector2D(0, 0));

	Vector3D C = Vector3D(1, 5, 10);
	Vector3D D = Vector3D(10, 2, 5);

	assert(C + D == Vector3D(11, 7, 15));
	assert(C - D == Vector3D(-9, 3, 5));
	assert(C * D == Vector3D(10, 10, 50)); 

	Vector4D E = Vector4D(1, 2, 3, 4);
	Vector4D F = Vector4D(5, 6, 7, 8);

	assert(E + F == Vector4D(6,8,10,12));
	assert(E - F == Vector4D(-4, -4, -4, -4));
	assert(E * F == Vector4D(5, 12, 21, 32));



	//////////////////////////////////////////////////
	//					MATRICES					//
	//////////////////////////////////////////////////

	Mat2 G = Mat2(1, 2, 3, 4);
	Mat2 H = Mat2(9, 8, 7, 6);



	return 1;
}