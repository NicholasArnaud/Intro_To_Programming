#pragma once
#include <iostream>

template<typename Type>
struct nodeType
{
	Type info;
	nodeType<Type> *link;
};


//2D Vector
template<typename Type>
class Vector2D
{
public:
	Vector2D() {};
	Vector2D(float X1, float Y1)
	{
		x = X1;
		y = Y1;
	}


	//Operator Over Loaders
	Vector2D operator + (const Vector2D & add)const
	{
		Vector2D ADD;
		ADD.x = x + add.x;
		ADD.y = y + add.y;
		return ADD;
	}

	Vector2D operator - (const Vector2D & Sub)const
	{
		Vector2D SUB;
		SUB.x = x - Sub.x;
		SUB.y = y - Sub.y;
		return SUB;
	}

	Vector2D operator * (const Vector2D & Mult)const
	{
		Vector2D MULT;
		MULT.x = x * Mult.x;
		MULT.y = y * Mult.y;
		return MULT;
	}

	bool operator == (const Vector2D & equal) const
	{
		if (x == equal.x && y == equal.y)
			return true;
		return false;

	}





	Vector2D Add(const Vector2D& A)
	{
		// [Addition] 
		//  ->A + ->B = ->C   =>  <Ax + By, Ay + By...., An, Bn>
		Vector2D tmp = Vector2D(x + A.x, y + A.y);
		return tmp;
	}

	Vector2D Substract(const Vector2D& A)
	{
		// [Subtraction]
		// ->A -  ->B = ->C   =>  <Ax - Bx, Ay - By, ..., An - Bn>
		Vector2D tmp = Vector2D(x - A.x, y - A.y);
		return tmp;
	}

	Vector2D ScalarMult(float mult)
	{
		// [Scalar Multipling]
		//  Let K be a constant Variable
		//  K   ->A  =>  < K . Ax, K . Ay>
		Vector2D tmp = Vector2D(x * mult, y * mult);
		return tmp;
	}



	float Mag()
	{
		// [Magnitude] 
		//  |->A|  =>  \| Ax * Ax + Ay * Ay
		return sqrt((x * x) + (y*y));
	}

	Vector2D Normal()
	{
		// [Normalize]
		//  ^A  => < Ax/|->A| , Ay/|->A|>
		Vector2D tmp = Vector2D(x / Mag(), y / Mag());
		return tmp;
	}

	float DotProd(const Vector2D& A)
	{
		//[Dot Product]
		//  ->A * ->B = Ax Bx + Ay By +.... An Bn
		return (x *A.x) + (y*A.y);
	}


private:
	float x, y;
};


//3D Vector
template<typename Type>
class Vector3D
{
public:
	Vector3D() {};
	Vector3D(float X, float Y, float Z)
	{
		x = X;
		y = Y;
		z = Z;
	};


	//Operator Over Loaders
	Vector3D operator + (const Vector3D & add)const
	{
		Vector3D ADD;
		ADD.x = x + add.x;
		ADD.y = y + add.y;
		ADD.z = z + add.z;
		return ADD;
	}

	Vector3D operator - (const Vector3D & Sub)const
	{
		Vector3D SUB;
		SUB.x = x - Sub.x;
		SUB.y = y - Sub.y;
		SUB.z = z - Sub.z;
		return SUB;
	}

	Vector3D operator * (const Vector3D & Mult)const
	{
		Vector3D MULT;
		MULT.x = x * Mult.x;
		MULT.y = y * Mult.y;
		MULT.z = z * Mult.z;
		return MULT;
	}

	bool operator == (const Vector3D & equal) const
	{
		if (x == equal.x && y == equal.y && z == equal.z)
			return true;
		return false;

	}




	Vector3D Add(const Vector3D& A)
	{
		// [Addition] 
		//  ->A + ->B = ->C   =>  <Ax + By, Ay + By...., An, Bn>
		Vector3D tmp = Vector3D(x + A.x, y + A.y, z + A.z);
		return tmp;
	}

	Vector3D Substract(const Vector3D& A)
	{
		// [Subtraction]
		// ->A -  ->B = ->C   =>  <Ax - Bx, Ay - By, ..., An - Bn>
		Vector3D tmp = Vector3D(x - A.x, y - A.y, z - A.z);
		return tmp;
	}

	Vector3D ScalarMult(float mult)
	{
		// [Scalar Multipling]
		//  Let K be a constant Variable
		//  K   ->A  =>  < K . Ax, K . Ay>
		Vector3D tmp = Vector3D(x * mult, y * mult, z* mult);
		return tmp;
	}



	float Mag()
	{
		// [Magnitude] 
		//  |->A|  =>  \| Ax * Ax + Ay * Ay
		return sqrt((x * x) + (y*y) + (z*z));
	}

	Vector3D Normal()
	{
		// [Normalize]
		//  ^A  => < Ax/|->A| , Ay/|->A|>
		Vector3D tmp = Vector3D(x / Mag(), y / Mag(), z / Mag());
		return tmp;
	}

	float DotProd(const Vector3D& A)
	{
		//[Dot Product]
		//  ->A * ->B = Ax Bx + Ay By +.... An Bn
		return (x *A.x) + (y*A.y) + (z*A.z);
	}

	Vector3D CrossProd(const Vector3D& A)
	{
		//[Cross Product]
		// ->A X ->B  =  
		// Ay Bz - Az By , x
		// Ax Bz - Az Bx , y
		// Ax By - Ay Bx , z
		Vector3D tmp = Vector3D(x *A.z - z * A.y, x * A.z - z * A.x, x* A.y - y* A.x);
		return tmp;
	}


private:
	float x, y, z;
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

	}

	//Function to overlaod the dereferencing operator *
	//Postcondition:Returns the info contained in the node
	Type operator*()
	{

	}

	//Overload the pre-increment operator
	//Postcondition: The iterator is advanced to the next node
	linkedListIterator<Type> operator++()
	{

	}

	//Overlaod the equality operator
	//Postcondition: Returns true if this iterator is equal to the 
	//iterator specified by right otherwise returns false
	bool operator == (linkedListIterator<Type>& list) const
	{

	}

	//Overlaod the not equal operator
	//Postcondition: Returns true if this iterator is not equal to the 
	//iterator specified by right otherwise returns false
	bool operator != (linkedListIterator<Type>& list) const
	{

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

	}

	//Initialize the list to an empty state
	//Postcondition: first = NULL, last = NULL, count = 0;
	void initializeList()
	{

	}

	//Function to determine whether the list is empty
	//Postcondition: Returns true if the list is empty otherwise it returns false
	bool isEmptyList() const
	{
		if (Head == nullptr)
			return true;
		return false;
	}

	//Function to output the data contained in each node
	//Postcondition: Node
	void print() const
	{
		while (Head != nullptr)
		{
			std::cout << Head->info;
			Head = Head->link;
		}
	}

	//Function to return the number of nodes in the list
	//Postcondition: The value of count is returned
	int length() const
	{
		count = 0;
		while (Head != nullptr)
		{
			Head = Head->link;
			count++;
		}
		return count;
	}

	//Function to delete all the nodes from the list
	//Postcondition: first = NULL, last = NULL, count = 0;
	void destroyList()
	{
		for (int i = 0; i <= count; i++)
		{
			Head = nullptr;
			Head = Head->link;
		}
		count = 0;
	}

	//Function to return the first element in the list
	//Precondition: The list must exist and must not be empty
	//Postcondition: If the list is empty, the program terminates; otherwise,
	//the first element of the list is returned
	Type front() const
	{
		return Head->info;
	}

	//Function to return the last element in the list
	//Precondition: The list must exist and must not be empty
	//Postcondition: If the list is empty, the program terminates; otherwise,
	//the last element of the list is returned
	Type back() const
	{
		if (Head != nullptr)
		{
			while (Head != nullptr)
			{
				Head = Head->link;
				Type backTmp = Head;
			}
		}
		return backTmp;

		else
			return 0;
	}

	//Function to determine whether node is in the list
	//Postcondition: Returns true if node is in the list
	//otherwise the value false is returned
	bool search(const Type& nodeInfo)
	{
		for (int i = 0; i <= count; i++)
		{
			if (nodeInfo == Head->info)
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
		first * Head->info;
	
	}

	//Function to insert node at the end of the list
	//Postcondition: first points to the new list, node is inserted 
	//at the beginning of the list, last points to the last node in
	//the list, and count is incremented by 1;
	void insertLast(const Type& nodeInfo)
	{

	}

	//Function to delete node from the list
	//Postcondition: If found, the node containing the node is deleted from the list. first points to
	//the first node, last points to the last node of the update list, and count is decremented by 1
	void deleteNode(const Type& nodeInfo)
	{

	}

	//Function to return an iterator at the begining of the linked list
	//Postcondition: Returns an iteratir such that the current is set to first
	linkedListIterator<Type> begin()
	{

	}

	//Funcion to rturn an iterator at the end of the linked list
	//Postcondition: Returns an iterator such that current is set to NULL
	linkedListIterator<Type> end()
	{

	}

	//Default constructor
	//Initializes the list to an empty state
	//Postcondition: first = NULL, last = NULL, count = 0;
	linkedListType()
	{

	}

	//copy constructor
	linkedListType(const linkedListType<Type>& otherList)
	{

	}

	//deconstructor
	//Deletes all the nodes from the list
	//Postcondition: The list object is destroyed
	~linkedListType<Type>() {}

private:
	//Function to make a copy of list
	//Postcondition: A copy of list is created and assigned to this list
	void copyList(const linkedListType<Type>& otherList) {}
};