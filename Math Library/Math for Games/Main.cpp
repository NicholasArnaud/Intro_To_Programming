#include <iostream>
#include <fstream>
#include <math.h>
#include <cassert>
#include "MathLib.h"


int main()
{
	//////////////////////////////////////////////////
	//					VECTORS						//
	//////////////////////////////////////////////////

	Vector2 A = Vector2(1, 0);
	Vector2 B = Vector2(0, 1);

	Vector2 dot = Vector2(5, 10);
	Vector2 dot2 = Vector2(2, 6);

	Vector2 norm = Vector2(3, 14);

	assert(A + B == Vector2(1, 1));
	assert(A - B == Vector2(1, -1));
	assert(A * B == Vector2(0, 0));

	
	A.Dot(B);
	norm.Normalize();


	Vector3 C = Vector3(1, 5, 10);
	Vector3 D = Vector3(10, 2, 5);
	C.CrossProduct(D);
	C.Magnitude();
	C.Normalize();

	assert(C + D == Vector3(11, 7, 15));
	assert(C - D == Vector3(-9, 3, 5));
	assert(C * D == Vector3(10, 10, 50));

	Vector4 E = Vector4(1, 2, 3, 4);
	Vector4 F = Vector4(5, 6, 7, 8);

	assert(E + F == Vector4(6, 8, 10, 12));
	assert(E - F == Vector4(-4, -4, -4, -4));
	assert(E * F == Vector4(5, 12, 21, 32));
	E.Dot(F);
	E.Magnitude();
	E.Normalize();


	//////////////////////////////////////////////////
	//					MATRICES					//
	//////////////////////////////////////////////////



	///////////////
	// 2D Matrix //
	//	X1 , Y1  //
	//  X2 , Y2  //
	///////////////


	Matrix2 K = Matrix2(2, 4, 6, 8);
	Vector2 L = Vector2(2, 3);
	assert(K * L == Vector2(22, 32));


	Matrix2 G = Matrix2(1, 4, 4, 2);
	Matrix2 H = Matrix2(2, 1, 4, 2);
	Matrix2 J = G* H;
	assert(G * H == Matrix2(18, 9, 16, 8));

	Matrix2 id2 = Matrix2(1, 2, 3, 4);

	///////////////////
	//	 3D Matrix	 //
	//	X1 , Y1 , Z1 //
	//  X2 , Y2 , Z2 //
	//  X3 , Y3 , Z3 //
	///////////////////

	Matrix3 M = Matrix3(1, 2, 3, 4, 5, 6, 7, 8, 9);
	Matrix3 N = Matrix3(9, 8, 7, 6, 5, 4, 3, 2, 1);
	assert(M*N == Matrix3(30, 24, 18, 84, 69, 54, 138, 114, 90));

	Matrix3 idenityMat3 = Matrix3(
		1, 0, 0,
		0, 1, 0,
		0, 0, 1);


	Matrix3 id3 = Matrix3(1, 2, 3, 4, 5, 6, 7, 8, 9);
	Matrix3 d = id3.setrotateX(90);
	Matrix3 o = id3.setRotateY(90);
	Matrix3 x = id3.setrotateZ(90);


	//////////////////////////
	//		4D Matrix		//
	//	X1 , Y1 , Z1 , W1	//
	//  X2 , Y2 , Z2 , W2	//
	//  X3 , Y3 , Z3 , W3	//
	//  X4 , Y4 , Z4 , W4	//
	//////////////////////////

	Matrix4 O = Matrix4(11, 22, 33, 44, 55, 66, 77, 88, 99, 10, 20, 30, 40, 50, 60, 70);
	Matrix4 P = Matrix4(12, 23, 34, 45, 56, 67, 78, 89, 90, 10, 21, 32, 43, 54, 65, 76);
	assert(O*P == Matrix4(6226, 4433, 5643, 6853, 15070, 11209, 14355, 17501, 4838, 4767, 6516, 8265, 11690, 8650, 11070, 13490));

	Matrix4 id4 = Matrix4(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
	Matrix4 f = id4.setrotateX(90);
	Matrix4 e = id4.setRotateY(90);
	Matrix4 l = id4.setrotateZ(90);



	//////////////////////////////////////////////////
	//				PRINT TO TEXT FILE				//
	//////////////////////////////////////////////////



	std::fstream file;
	file.open("VectorTest.txt", std::ios_base::out);
	if (file.is_open())
	{
		//prints Vectors
		file << "==================================================================================== \n";
		file << "VECTORS \n\n\n\n\n";

		file << "2D Vectors: \n" << "Vector A: " << A << "\n" << "Vector B: " << B << "\n\n";
		file << "Vector A + Vector B equals: " << "\n" << A + B << "\n";
		file << "Excpected Result is: 1,1 " << "\n\n\n";


		file << "Vector A - Vector B equals: " << "\n" << A - B << "\n";
		file << "Excpected Result is: 1,-1 " << "\n\n\n";


		file << "Vector A * Vector B equals: " << "\n" << A * B << "\n";
		file << "Excpected Result is: 0,0 " << "\n\n\n\n";

		file << "2D Vector Dot is: \n" << dot << "\n" << "2D Vector Dot2 is: \n" << dot2 << "\n";
		file << "The Dot Product of 2D Vector Dot with 2D Vector Dot2 is : " << "\n" << dot.Dot(dot2) << "\n";
		file << "Expected Result is: 70 \n\n\n";

		file << "2D Vector norm is: \n" << norm << "\n";
		file << "2D Vector norm Normalized is: \n" << norm.Normalize() << "\n";
		file << "Expected Result is: 0.20952 , 0.97780 \n\n\n\n";

		file << "3D Vectors: \n" << "Vector C: " << C << "\n" << "Vector D: " << D << "\n\n";
		file << "Vector C + Vector D equals: " << "\n" << C + D << "\n";
		file << "Excpected Result is: 11, 7, 15 " << "\n\n\n";


		file << "Vector C - Vector D equals: " << "\n" << C - D << "\n";
		file << "Excpected Result is: -9, 3, 5 " << "\n\n\n";


		file << "Vector C * Vector D equals: " << "\n" << C * D << "\n";
		file << "Excpected Result is: 10, 10, 50 " << "\n\n\n";

		file << "The Cross Product of Vector C with Vector D is: \n" << C.CrossProduct(D) << "\n";
		file << "Expected Result is: 5,95,-48" << "\n\n\n";

		file << "The Dot Product of Vector C with Vector D is: \n" << C.Dot(D) << "\n";
		file << "Expected Result is: 70" << "\n\n\n";

		file << "The Magnitude of Vector C is: \n" << C.Magnitude() << "\n";
		file << "Expected Result is: 11.225" << "\n\n\n";

		file << "Normalization of Vector C is: \n" << C.Normalize() << "\n";
		file << "Expected Result is: 0.0890871,0.445435,0.890871" << "\n\n\n\n";

		file << "4D Vectors: \n" << "Vector E: " << E << "\n" << "Vector F: " << F << "\n\n";
		file << "Vector E + Vector F equals: " << "\n" << E + F << "\n";
		file << "Excpected Result is: 6, 8, 10, 12 " << "\n\n\n";


		file << "Vector E - Vector F equals: " << "\n" << E - F << "\n";
		file << "Excpected Result is: -4, -4, -4, -4 " << "\n\n\n";


		file << "Vector E * Vector F equals: " << "\n" << E * F << "\n";
		file << "Excpected Result is: 5, 12, 21, 32 " << "\n\n\n";

		file << "The Magnitude of Vector E is: \n" << E.Magnitude() << "\n";
		file << "Expected Result is: 5.47723" << "\n\n\n";

		file << "Vector E Normalized is: " << E.Normalize() << "\n";
		file << "Expected Result is: 0.182574, 0.365148, 0.547723, 0.730297" << "\n\n\n";

		file << "2D Matrix for multiplying a 2D Vector: \n" << K << "\n";
		file << "Matrix K * Vector L equals: \n" << "\n" << K*L << "\n";
		file << "Excpected Result is: " << "\n" << "22, 32 " << "\n\n\n";
	}
	file.close();

	//prints Matrices
	file.open("MatrixTest.txt", std::ios_base::out);
	if (file.is_open())
	{
		file << "==================================================================================== \n";
		file << "MATRICES \n\n\n\n\n\n\n";


		file << "2D Matrices: \n" << "Matrix G: \n" << G << "\n" << "Matrix H: \n" << H << "\n\n";
		file << "Matrix G * Matrix H equals: " << "\n" << G * H << "\n\n";
		file << "Excpected Result is: " << "\n" << "18, 9 " << "\n" << "16, 8 " << "\n\n\n";


		file << "3D Matrices: \n\n" << "Matrix M: \n" << M << "\n" << "Matrix N: \n" << N << "\n\n";
		file << "Matrix M * Matrix N equals: " << "\n" << M * N << "\n\n";
		file << "Excpected Result is: " << "\n" << "30, 24, 18" << "\n" << "84, 69, 54" << "\n" << "138, 114, 90" << "\n\n\n";


		file << "4D Matrices: \n\n" << "Matrix O: \n\n" << O << "\n\n" << "Matrix P: \n\n" << P << "\n\n";
		file << "Matrix O * Matrix P equals: " << "\n\n" << O * P << "\n\n";
		file << "Excpected Result is: " << "\n\n" << "6226, 4433, 5643, 6853" << "\n" << "15070, 11209, 14355, 17501" << "\n" << "4838, 4767, 6516, 8265" << "\n" << "11690, 8650, 11070, 13490 " << "\n\n\n";
	}
	file.close();


	return 1;
}
