#pragma once


//2D Vector
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






//Linked List

template<typename Type>
class LinkedList
{
public:
	 bool Add (const & Type)
	{

	}

	//Check if Empty
	//template<typename Type>
	bool isEmpty()
	{
		if (Head == nullptr)
			return true;
		return false;
	}

	//Front of List
	//template<typename Type>
	const int front()
	{
		return Head->info;
	}

//Find Length
	//template<typename Type>
	const int length()
	{
			count = 0;
		while (Head != nullptr)
		{
			Head = Head->link;
			count++;
		}
		return count;
	}

	//Print
	//template<typename Type>
	void print()
	{
		while (Head != nullptr)
		{
			std::cout << Head->info;
			Head = Head->link;
		}
	}
protected:
	int Count;
	nodeType<Type>* first;
	nodeType<Type>* last;


};

	


//Node Type
template <typename Type>
struct nodeType
{
	Type info;
	nodeType<Type>* link;
};





