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

	assert(E + F == Vector4(6, 8, 10, 12));
	assert(E - F == Vector4(-4, -4, -4, -4));
	assert(E * F == Vector4(5, 12, 21, 32));



	//////////////////////////////////////////////////
	//					MATRICES					//
	//////////////////////////////////////////////////



	///////////////
	// 2D Matrix //
	//	X1 , Y1  //
	//  X2 , Y2  //
	///////////////


	Matrix2 G = Matrix2(1, 4, 4, 2);
	Matrix2 H = Matrix2(2, 1, 4, 2);
	Matrix2 J = G* H;
	assert(G * H == Matrix2(18, 9, 16, 8));

	Matrix2 K = Matrix2(2, 4, 6, 8);
	Vector2 L = Vector2(2, 3);
	assert(K * L == Vector2(22, 32));



	///////////////////
	//	 3D Matrix	 //
	//	X1 , Y1 , Z1 //
	//  X2 , Y2 , Z2 //
	//  X3 , Y3 , Z3 //
	///////////////////

	Matrix3 M = Matrix3(1, 2, 3, 4, 5, 6, 7, 8, 9);
	Matrix3 N = Matrix3(9, 8, 7, 6, 5, 4, 3, 2, 1);
	assert(M*N == Matrix3(30, 24, 18, 84, 69, 54, 138, 114, 90));



	//////////////////////////
	//		4D Matrix		//
	//	X1 , Y1 , Z1 , W1	//
	//  X2 , Y2 , Z2 , W2	//
	//  X3 , Y3 , Z3 , W3	//
	//  X4 , Y4 , Z4 , W4	//
	//////////////////////////

	Matrix4 O = Matrix4(11, 22, 33, 44, 55, 66, 77, 88, 99, 10, 20, 30, 40, 50, 60, 70);
	Matrix4 P = Matrix4(12, 23, 34, 45, 56, 67, 78, 89, 90, 10, 21, 32, 43, 54, 65, 76);
	assert(O*P == Matrix4(6226,4433,5643,6853,15070,11209,14355,17501,4838,4767,6516,8265,11690,8650,11070, 13490));



	return 1;
}
