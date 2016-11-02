#include <iostream>
#include <math.h>
#include <cassert>
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

//template<Type>
//void Print() {};

int main()
{
	Vector2D  A =  Vector2D(1, 0);
	Vector2D  B =  Vector2D(0, 1);

	


	assert(A + B == Vector2D(1,1));
	assert(A - B == Vector2D(1,-1));
	assert(A * B == Vector2D(0,0));




	Vector3D L = Vector3D(1, 5, 10);
	Vector3D F = Vector3D(10, 2, 5);

	assert(L + F == Vector3D(11,7,15));
	assert(L - F == Vector3D(-9,3,5));
	assert(L * F == Vector3D(10, 10, 50));
	


	template<Type>
	nodeType<Type> * Head;

	template <Type>
	nodeType<Type> a, b, c;
	template<Type>
	c.info = 4;
	template<Type>
	b.info = 2;
	template<Type>
	a.info = 0;
	template<Type>
	Head = &c;
	template<Type>
	c.link = &b;
	template<Type>
	b.link = &a;
	template<Type>
	a.link = nullptr;

	//template<Type>
	//Print();


	

	return 1;
}

//template<Type>
//Node Print()
//{
//	while (Head != nullptr)
//	{
//		std::cout << Head->info;
//		Head = Head->link;
//	}
//}