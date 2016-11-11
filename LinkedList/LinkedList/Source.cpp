#include <iostream>
#include <cassert>
#include <math.h>
#include "ListIterator.h"


int main()
{
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