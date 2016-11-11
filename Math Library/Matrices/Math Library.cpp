#include <iostream>
#include <istream>
#include <math.h>
#include <cassert>
#include "Classes.h"






int main()
{
	//////////////////////////////////////////////////
	//					VECTORS						//
	//////////////////////////////////////////////////

	Vector2 A = Vector2(1, 0);
	Vector2 B = Vector2(0, 1);

	assert(A + B == Vector2(1, 1));
	assert(A - B == Vector2(1, -1));
	assert(A * B == Vector2(0, 0));

	Vector3 C = Vector3(1, 5, 10);
	Vector3 D = Vector3(10, 2, 5);

	assert(C + D == Vector3(11, 7, 15));
	assert(C - D == Vector3(-9, 3, 5));
	assert(C * D == Vector3(10, 10, 50)); 

	Vector4 E = Vector4(1, 2, 3, 4);
	Vector4 F = Vector4(5, 6, 7, 8);

	assert(E + F == Vector4(6,8,10,12));
	assert(E - F == Vector4(-4, -4, -4, -4));
	assert(E * F == Vector4(5, 12, 21, 32));



	//////////////////////////////////////////////////
	//					MATRICES					//
	//////////////////////////////////////////////////



	///////////////
	//  X1 , Y1  //
	//  X2 , Y2  //
	///////////////


	Matrix2 G = Matrix2(1, 4, 4, 2);
	Matrix2 H = Matrix2(2, 1, 4, 2);
	Matrix2 J = G* H;
	assert(G * H == Matrix2(18, 9, 16, 8));
	
	Matrix2 K = Matrix2(2, 4, 6, 8);
	Vector2 L = Vector2(2, 3);
	assert(K * L == Vector2(22, 32));


	return 1;
}
