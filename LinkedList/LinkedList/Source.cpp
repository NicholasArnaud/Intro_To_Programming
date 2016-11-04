#include <iostream>
#include <cassert>
#include <math.h>
#include "ListIterator.h"


int main()
{
	//////////////////////////////////////////////////
	//					VECTORS						//
	//////////////////////////////////////////////////
	
	Vector2D<int> A = Vector2D<int>(1, 0);
	Vector2D<int>  B = Vector2D<int>(0, 1);

	assert(A + B == Vector2D<int>(1, 1));
	assert(A - B == Vector2D<int>(1, -1));
	assert(A * B == Vector2D<int>(0, 0));

	Vector3D<int> L = Vector3D<int>(1, 5, 10);
	Vector3D<int> F = Vector3D<int>(10, 2, 5);

	assert(L + F == Vector3D<int>(11, 7, 15));
	assert(L - F == Vector3D<int>(-9, 3, 5));
	assert(L * F == Vector3D<int>(10, 10, 50));

	//////////////////////////////////////////////////
	//				LINKED LISTS					//
	//////////////////////////////////////////////////
	nodeType<int> * Head;
	nodeType<int> a, b, c;

	c.info = 4;
	b.info = 2;
	a.info = 0;
	Head = &c;
	c.link = &b;
	b.link = &a;
	a.link = NULL;



	
	linkedListType<int> *K = new  linkedListType<int>();
	
	K->insertLast(7);
	K->insertFirst(11);
	K->insertFirst(10);
	K->length();
	K->back();
	K->front();
	K->isEmptyList();
	K->search(7);
	K->print();
	K->end();
	K->begin();
	K->destroyList();
	
	return 0;
}