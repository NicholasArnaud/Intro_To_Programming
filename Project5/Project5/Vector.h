#pragma once

#include <iostream>
#include <math.h>
#include <cassert>


////////////////////
//	VECTORS		  //
////////////////////




////////////////////
//	2D VECTOR	  //
////////////////////
class Vector2
{
public:
	//Constructors
	Vector2() {};
	Vector2(float X1, float Y1)
	{
		x = X1;
		y = Y1;
	}


	//Operator Over Loaders

	//Overloads "+" to be able to add 2D Vectors
	Vector2 operator + (const Vector2 & add)const
	{
		Vector2 ADD;
		ADD.x = x + add.x;
		ADD.y = y + add.y;
		return ADD;
	}

	//Overloads "-" to be able to subract 2D Vectors
	Vector2 operator - (const Vector2 & Sub)const
	{
		Vector2 SUB;
		SUB.x = x - Sub.x;
		SUB.y = y - Sub.y;
		return SUB;
	}

	//Overloads "*" to be able to multiply 2D Vectors
	Vector2 operator * (const Vector2 & Mult)const
	{
		Vector2 MULT;
		MULT.x = x * Mult.x;
		MULT.y = y * Mult.y;
		return MULT;
	}

	//Overloads "*" to be able to multiply 2D Vectors with a regular number
	Vector2 operator * (const float & Mult)const
	{
		Vector2 MULT;
		MULT.x = x * Mult;
		MULT.y = y * Mult;
		return MULT;
	}

	//Overloads "==" to be able to compare 2D Vectors
	bool operator == (const Vector2 & equal) const
	{
		return (x == equal.x && y == equal.y);
	}

	//Overloads "+=" to add and set a new value of 2D Vectors 
	void operator += (const Vector2 & plusEqual)
	{
		x = x + plusEqual.x;
		y = y + plusEqual.y;

	}

	//Overloads "-=" to add and set a new value of 2D Vectors 
	void operator -= (const Vector2 & subEqual)
	{
		x = x - subEqual.x;
		y = y - subEqual.y;

	}

	//Overloads "<<" to be able to print out 2D Vectors
	friend std::ostream &operator << (std::ostream &output, const Vector2 & v)
	{
		output << v.x << "," << v.y;
		return output;
	}


	//Math Problems

	//Adds two 2D Vectors
	Vector2 Add(const Vector2& A)
	{
		// [Addition] 
		//  ->A + ->B = ->C   =>  <Ax + By, Ay + By...., An, Bn>
		Vector2 tmp = Vector2(x + A.x, y + A.y);
		return tmp;
	}

	//Subtracts two 2D Vectors
	Vector2 Substract(const Vector2& A)
	{
		// [Subtraction]
		// ->A -  ->B = ->C   =>  <Ax - Bx, Ay - By, ..., An - Bn>
		Vector2 tmp = Vector2(x - A.x, y - A.y);
		return tmp;
	}

	//Scalar Multiplies a 2D Vector
	//essentially multiplies a 2D Vector to a regular number
	Vector2 ScalarMult(float mult)
	{
		// [Scalar Multipling]
		//  Let K be a constant Variable
		//  K   ->A  =>  < K . Ax, K . Ay>
		Vector2 tmp = Vector2(x * mult, y * mult);
		return tmp;
	}

	//Gets the Magnitude of a 2D Vector
	//which is x squared + y squared, and all square rooted
	float Mag()
	{
		// [Magnitude] 
		//  |->A|  =>  \| Ax * Ax + Ay * Ay
		return sqrt((x * x) + (y*y));
	}

	//Normalizes a 3D vector
	//it uses x, and y, each divided by the Magnitude to get normalization
	Vector2 Normal()
	{
		// [Normalize]
		//  ^A  => < Ax/|->A| , Ay/|->A|>
		Vector2 tmp = Vector2(x / Mag(), y / Mag());
		return tmp;
	}

	//Gets the Dot Product of 3D Vectors
	//Multiplies each Vectors x, and y together and then adds them together 
	float DotProd(const Vector2& A)
	{
		//[Dot Product]
		//  ->A * ->B = Ax Bx + Ay By +.... An Bn
		return (x *A.x) + (y*A.y);
	}


	//Get variables

	float Getx() const
	{
		return x;
	}
	float Gety() const
	{
		return y;
	}


private:
	float x, y;
};




////////////////////
//	3D VECTOR	  //
////////////////////
class Vector3
{
public:
	//Constructors
	Vector3() {};
	Vector3(float X, float Y, float Z)
	{
		x = X;
		y = Y;
		z = Z;
	};


	//Operator Over Loaders

	//Overloads "+" to be able to add 3D Vectors
	Vector3 operator + (const Vector3 & add)const
	{
		Vector3 ADD;
		ADD.x = x + add.x;
		ADD.y = y + add.y;
		ADD.z = z + add.z;
		return ADD;
	}

	//Overloads "-" to be able to subract 3D Vectors
	Vector3 operator - (const Vector3 & Sub)const
	{
		Vector3 SUB;
		SUB.x = x - Sub.x;
		SUB.y = y - Sub.y;
		SUB.z = z - Sub.z;
		return SUB;
	}

	//Overloads "*" to be able to multiply 3D Vectors
	Vector3 operator * (const Vector3 & Mult)const
	{
		Vector3 MULT;
		MULT.x = x * Mult.x;
		MULT.y = y * Mult.y;
		MULT.z = z * Mult.z;
		return MULT;
	}

	//Overloads "*" to be able to multiply 3D Vectors with a regular number
	Vector3 operator * (const float & Mult)const
	{
		Vector3 MULT;
		MULT.x = x * Mult;
		MULT.y = y * Mult;
		MULT.z = z * Mult;
		return MULT;
	}

	//Overloads "==" to be able to compare 3D Vectors
	bool operator == (const Vector3 & equal) const
	{
		return (x == equal.x && y == equal.y && z == equal.z);
	}

	//Overloads "<<" to be able to print out 3D Vectors
	friend std::ostream &operator << (std::ostream &output, const Vector3 & v)
	{
		output << v.x << "," << v.y << "," << v.z;
		return output;
	}


	//Math Problems

	//Adds two 3D Vectors
	Vector3 Add(const Vector3& A)
	{
		// [Addition] 
		//  ->A + ->B = ->C   =>  <Ax + By, Ay + By...., An, Bn>
		Vector3 tmp = Vector3(x + A.x, y + A.y, z + A.z);
		return tmp;
	}

	//Subtracts two 3D Vectors
	Vector3 Substract(const Vector3& A)
	{
		// [Subtraction]
		// ->A -  ->B = ->C   =>  <Ax - Bx, Ay - By, ..., An - Bn>
		Vector3 tmp = Vector3(x - A.x, y - A.y, z - A.z);
		return tmp;
	}

	//Scalar Multiplies a 3D Vector
	//essentially multiplies a 3D Vector to a regular number
	Vector3 ScalarMult(float mult)
	{
		// [Scalar Multipling]
		//  Let K be a constant Variable
		//  K   ->A  =>  < K . Ax, K . Ay>
		Vector3 tmp = Vector3(x * mult, y * mult, z* mult);
		return tmp;
	}


	//Gets the Magnitude of a 3D Vector
	//which is x squared + y squared + z squared, and all square rooted
	float Mag()
	{
		// [Magnitude] 
		//  |->A|  =>  \| Ax * Ax + Ay * Ay
		return sqrt((x * x) + (y*y) + (z*z));
	}

	//Normalizes a 3D vector
	//it uses x,y,and z each divided by the Magnitude to get normalization
	Vector3 Normal()
	{
		// [Normalize]
		//  ^A  => < Ax/|->A| , Ay/|->A|>
		Vector3 tmp = Vector3(x / Mag(), y / Mag(), z / Mag());
		return tmp;
	}

	//Gets the Dot Product of 3D Vectors
	//Multiplies each Vectors x,y, and z together and then adds them together 
	float DotProd(const Vector3& A)
	{
		//[Dot Product]
		//  ->A * ->B = Ax Bx + Ay By +.... An Bn
		return (x *A.x) + (y*A.y) + (z*A.z);
	}

	//Gets the Cross Product of two 3D Vectors
	//Cross multiplies the two vectors
	Vector3 CrossProd(const Vector3& A)const
	{
		//[Cross Product]
		// ->A X ->B  =  
		// Ay Bz - Az By , x
		// Ax Bz - Az Bx , y
		// Ax By - Ay Bx , z
		Vector3 tmp = Vector3(y *A.z - z * A.y, z * A.x - x * A.z, x* A.y - y* A.x);
		return tmp;
	}


private:
	float x, y, z;
};




////////////////////
//	4D VECTOR	  //
////////////////////
class Vector4
{
public:
	//Constructors
	Vector4() {};
	Vector4(float X1, float Y1, float Z1, float W1)
	{
		x = X1;
		y = Y1;
		z = Z1;
		w = W1;
	};


	//Operator Over Loaders

	//Overloads "+" to be able to add 4D Vectors
	Vector4 operator + (const Vector4 & add)const
	{
		Vector4 ADD;
		ADD.x = x + add.x;
		ADD.y = y + add.y;
		ADD.z = z + add.z;
		ADD.w = w + add.w;
		return ADD;
	}

	//Overloads "-" to be able to subract 4D Vectors
	Vector4 operator - (const Vector4 & Sub)const
	{
		Vector4 SUB;
		SUB.x = x - Sub.x;
		SUB.y = y - Sub.y;
		SUB.z = z - Sub.z;
		SUB.w = w - Sub.w;
		return SUB;
	}

	//Overloads "*" to be able to multiply 4D Vectors
	Vector4 operator * (const Vector4 & Mult)const
	{
		Vector4 MULT;
		MULT.x = x * Mult.x;
		MULT.y = y * Mult.y;
		MULT.z = z * Mult.z;
		MULT.w = w * Mult.w;
		return MULT;
	}

	//Overloads "*" to be able to multiply 4D Vectors with a regular number
	Vector4 operator * (const float & Mult)const
	{
		Vector4 MULT;
		MULT.x = x * Mult;
		MULT.y = y * Mult;
		MULT.z = z * Mult;
		MULT.w = w * Mult;
		return MULT;
	}

	//Overloads "==" to be able to compare 4D Vectors
	bool operator == (const Vector4 & equal) const
	{
		return ((x == equal.x) && (y == equal.y) && (z == equal.z) && (w == equal.w));

	}

	//Overloads "<<" to be able to print out 4D Vectors
	friend std::ostream &operator << (std::ostream &output, const Vector4 & v)
	{
		output << v.x << ", " << v.y << ", " << v.z << ", " << v.w;
		return output;
	}



	//Math Problems

	//Adds two 4D Vectors
	Vector4 Add(const Vector4& A)
	{
		// [Addition] 
		//  ->A + ->B = ->C   =>  <Ax + By, Ay + By...., An, Bn>
		Vector4 tmp = Vector4(x + A.x, y + A.y, z + A.z, w + A.w);
		return tmp;
	}

	//Subtracts two 4D Vectors
	Vector4 Substract(const Vector4& A)
	{
		// [Subtraction]
		// ->A -  ->B = ->C   =>  <Ax - Bx, Ay - By, ..., An - Bn>
		Vector4 tmp = Vector4(x - A.x, y - A.y, z - A.z, w - A.w);
		return tmp;
	}

	//Scalar Multiplies a 4D Vector
	//essentially multiplies a 4D Vector to a regular number
	Vector4 ScalarMult(float mult)
	{
		// [Scalar Multipling]
		//  Let K be a constant Variable
		//  K   ->A  =>  < K . Ax, K . Ay>
		Vector4 tmp = Vector4(x * mult, y * mult, z * mult, w *mult);
		return tmp;
	}

	//Gets the Magnitude of a 4D Vector
	//which is x squared + y squared + z squared + w squared, and all square rooted
	float Mag()
	{
		// [Magnitude] 
		//  |->A|  =>  \| Ax * Ax + Ay * Ay
		return sqrt((x * x) + (y*y) + (z*z) + (w*w));
	}

	//Normalizes a 4D vector
	//it uses x, y, z and w each divided by the Magnitude to get normalization
	Vector4 Normal()
	{
		// [Normalize]
		//  ^A  => < Ax/|->A| , Ay/|->A|>
		return Vector4(x / Mag(), y / Mag(), z / Mag(), w / Mag());
	}

	//Gets the Dot Product of 4D Vectors
	//Multiplies each Vectors x,y, z and w together and then adds them together
	float DotProd(const Vector4& A)
	{
		//[Dot Product]
		//  ->A * ->B = Ax Bx + Ay By +.... An Bn
		return (x *A.x) + (y*A.y) + (z*A.z) + (w*A.w);
	}


private:
	float x, y, z, w;
};

