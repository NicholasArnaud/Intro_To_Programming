#include <iostream>
#include <cassert>
#include <math.h>
#include "ListIterator.h"


int main()
{

	
	Vector2D<int> A = Vector2D<int>(1, 0);
	Vector2D<int>  B = Vector2D<int>(0, 1);

	Vector3D<int> L = Vector3D<int>(1, 5, 10);
	Vector3D<int> F = Vector3D<int>(10, 2, 5);


	nodeType<int> * Head;
	nodeType<int> a, b, c;


	c.info = 4;
	b.info = 2;
	a.info = 0;
	Head = &c;
	c.link = &b;
	b.link = &a;
	a.link = nullptr;



	
	linkedListType<int> K = linkedListType<int>();
	K.insertLast(c);

	return 0;
}