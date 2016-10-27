#include <iostream>
#include <math.h>
#include "Vector2.h"

//Needs to be completed by end of Friday Oct. 28
//vector class 2D
//Add, Subtract, Scaler Multiplication 

//Needs to be completed by end of Monday Oct. 31
//vector class 3D with 2D
//Add, Subtract, Scalar Mult, Magnitude, Normalize, Dot Product, Cross Product



//Vector: Let   ->A  be a vector  <Ax, Ay....>
//Vwctor: Let   ->B  be a vector  <Bx, By....>

// [Addition] 
//  ->A + ->B = ->C   =>  <Ax + By, Ay + By...., An, Bn>

// [Subtraction]
// ->A -  ->B = ->C   =>  <Ax - Bx, Ay - By, ..., An - Bn>

// [Scalar Multipling]
//  Let K be a constant Variable
//  K   ->A  =>  < K . Ax, K . Ay>

// [Magnitude] 
//  |->A|  =>  \| Ax * Ax + Ay * Ay

// [Normalize]
//  ^A  => < Ax/|->A| , Ay/|->A|>

//[Dot Product]
//  ->A * ->B = Ax Bx + Ay By +.... An Bn

//[Cross Product]
// ->A X ->B  =  
// Ay Bz - Az By , x
// Ax Bz - Az Bx , y
// Ax By - Ay Bx , z

int main()
{
	Vector2D * A = new Vector2D(6.4, 2);
	Vector2D B = Vector2D(7, 4);

	A->Add(B);
	A->Substract(B);
	A->ScalarMult(5);




	Vector3D * C = new Vector3D(9.99, 5, 6);
	Vector3D D = Vector3D(12, 1.1, 5);

	C->Add(D);
	C->Substract(D);
	C->ScalarMult(2);



	return 1;
}