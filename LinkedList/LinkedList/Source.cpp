#include <iostream>
#include <cassert>
#include <math.h>
#include <fstream>
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
	








	std::fstream file;
	file.open("LinkedListTest.txt", std::ios_base::out);
	if (file.is_open())
	{
		file << "Length of Linked List is: \n"<<K->length()<< "\n\n\n";
		file << "The last variable of the Linked List is: \n" << K->back()<<"\n\n\n";

	}
	file.close();

	return 0;
}