#pragma once
#include <iostream>


template<typename Type>
struct nodeType
{
	Type info;
	nodeType<Type> *link;
};


template<typename Type>
class linkedListIterator
{
private:
	nodeType<Type> * current; //pointer to point to the current node in the linked list

public:
	//Default constructor
	//Postcondition: current = NULL
	linkedListIterator() {}

	//Constructor with parameter
	//Postcondition: current = node
	linkedListIterator(nodeType<Type> *node)
	{
		current = node;
	}

	//Function to overlaod the dereferencing operator *
	//Postcondition:Returns the info contained in the node
	Type operator*()
	{
		if (current == NULL)
			return NULL;
		return current->info;
	}

	//Overload the pre-increment operator
	//Postcondition: The iterator is advanced to the next node
	linkedListIterator<Type> operator++()
	{
		current = current->link;
		return *this;
	}

	//Overlaod the equality operator
	//Postcondition: Returns true if this iterator is equal to the 
	//iterator specified by right otherwise returns false
	bool operator == (linkedListIterator<Type>& list) const
	{
		if (list.current == current)
		{
			return true;
		}
		return false;
	}

	//Overlaod the not equal operator
	//Postcondition: Returns true if this iterator is not equal to the 
	//iterator specified by right otherwise returns false
	bool operator != (linkedListIterator<Type>& list) const
	{
		if (list.current != current)
		{
			return true;
		}
		return false;
	}
};


template<typename Type>
class linkedListType
{
protected:
	int count; //variable to store the number of elements in the list
	nodeType<Type> *first; //pointer to the first node of the list
	nodeType<Type> *last; //pointer to the last node of the list

public:
	//Overload the assignment operator
	const linkedListType<Type>& operator = (const linkedListType<Type>& otherList)
	{
		while (count != NULL)
		{
			first->info = otherList first->info;
		}
		return first;
	}

	//Initialize the list to an empty state
	//Postcondition: first = NULL, last = NULL, count = 0;
	void initializeList()
	{
		first = NULL;
		last = NULL;
		count = 0;
	}

	//Function to determine whether the list is empty
	//Postcondition: Returns true if the list is empty otherwise it returns false
	bool isEmptyList() const
	{
		if (first == NULL)
			return true;
		return false;
	}

	//Function to output the data contained in each node
	//Postcondition: Node
	void print() const
	{
		//tried attempts:

		/*linkedListType<Type> * tmp = new linkedListType<Type>();
		for (int i = 0; i <= count; i++)
			std::cout << tmp << "\n";
		//outputs 000001CEAEABBDC10 4x
		//likely since tmp is pointing at memory and not actually iterating through the list
		*/

		/*
		for (int i = 0; i <= count; i++)
			std::cout << first->info << "\n";
		//outputs 10 4xs
		// likely because it is reading only the first integer in the list and also not iterating through list
		*/

		/*
		std::cout << first->info << "\n";
		for (int i = 1; i <= count-2; i++)
		{}
		std::cout << last->info << "\n";
		outputs : first and last node
		//still does not print out in between other nodes
		*/

		nodeType<Type> * current;

		for (int i = 1; i <= count; i++)
		{
			std::cout << current->info;
		}

	}

	//Function to return the number of nodes in the list
	//Postcondition: The value of count is returned
	int length() const
	{
		return count;
	}

	//Function to delete all the nodes from the list
	//Postcondition: first = NULL, last = NULL, count = 0;
	void destroyList()
	{
		nodeType<Type> * rekt = first;
		while (rekt != NULL)
		{
			nodeType<Type> * out = rekt;
			rekt = rekt->link;
			delete out;
		}
		initializeList();
	}

	//Function to return the first element in the list
	//Precondition: The list must exist and must not be empty
	//Postcondition: If the list is empty, the program terminates; otherwise,
	//the first element of the list is returned
	Type front() const
	{
		assert(count != 0);
		return first->info;
	}

	//Function to return the last element in the list
	//Precondition: The list must exist and must not be empty
	//Postcondition: If the list is empty, the program terminates; otherwise,
	//the last element of the list is returned
	Type back() const
	{
		assert(count != 0);
		return last->info;
	}

	//Function to determine whether node is in the list
	//Postcondition: Returns true if node is in the list
	//otherwise the value false is returned
	bool search(const Type& nodeInfo)
	{
		for (int i = 0; i <= count; i++)
		{
			if (nodeInfo == first->info)
				return true;
		}
		return false;
	}

	//Function to insert node at the begining of the list
	//Postcondition: first points to the new list, node is inserted 
	//at the beginning of the list, last points to the last node in
	//the list, and count is incremented by 1;
	void insertFirst(const Type& nodeInfo)
	{
		nodeType<Type> * newNode;
		newNode = new nodeType<Type>;
		if (count == 0)
		{
			newNode->info = nodeInfo;
			newNode->link = NULL;
			newNode->info = nodeInfo;
			newNode->link = NULL;
			count++;
		}
		else
		{
			newNode->link = first;
			first = newNode;
			first->info = nodeInfo;
			count++;
		}

	}

	//Function to insert node at the end of the list
	//Postcondition: first points to the new list, node is inserted 
	//at the beginning of the list, last points to the last node in
	//the list, and count is incremented by 1;
	void insertLast(const Type& nodeInfo)
	{

		if (count == 0)
		{
			first->info = nodeInfo;
			first->link = NULL;
			last->info = nodeInfo;
			last->link = NULL;
			count++;
		}
		else
		{
			nodeType<Type> * newNode;
			newNode = new nodeType<Type>;
			last->link = newNode;
			last = newNode;

			if (count == 1)
			{
				first->link = newNode;
			}

			last->info = nodeInfo;
			last->link = NULL;
			count++;
		}
	}

	//Function to delete node from the list
	//Postcondition: If found, the node containing the node is deleted from the list. first points to
	//the first node, last points to the last node of the update list, and count is decremented by 1
	void deleteNode(const Type& nodeInfo)
	{
		for (int i = 0; i <= count; i++)
		{
			if (nodeInfo == first->info)
			{
				delete first->info;
				count--;
				First->info = nodeInfo->info;
			}

		}

	}

	//Function to return an iterator at the beginning of the linked list
	//Postcondition: Returns an iterator such that the current is set to first
	linkedListIterator<Type> begin()
	{
		linkedListIterator<Type> tmp = first;
		return tmp;
	}

	//Funcion to return an iterator at the end of the linked list
	//Postcondition: Returns an iterator such that current is set to NULL
	linkedListIterator<Type> end()
	{
		linkedListIterator<Type> tmp = last;
		return tmp;
	}

	//Default constructor
	//Initializes the list to an empty state
	//Postcondition: first = NULL, last = NULL, count = 0;
	linkedListType()
	{
		first = new nodeType<Type>;
		last = new nodeType<Type>;
		count = 0;
	}

	//copy constructor
	linkedListType(const linkedListType<Type>& otherList)
	{

		this = otherList;

	}

	//deconstructor
	//Deletes all the nodes from the list
	//Postcondition: The list object is destroyed
	~linkedListType<Type>() {}

private:
	//Function to make a copy of list
	//Postcondition: A copy of list is created and assigned to this list
	void copyList(const linkedListType<Type>& otherList)
	{
		first = otherlist.first;
		count = otherlist.count;
		last = otherlist.last;
	}
};