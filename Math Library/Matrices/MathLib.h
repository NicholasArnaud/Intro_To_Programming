#pragma once
#include <iostream>
#include <ostream>
#include <fstream>
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
	Vector2(float X1, float Y1);


	//Operator Over Loaders

	//Overloads "+" to be able to add 2D Vectors
	Vector2 operator + (const Vector2 & add)const;

	//Overloads "-" to be able to subract 2D Vectors
	Vector2 operator - (const Vector2 & Sub)const;

	//Overloads "*" to be able to multiply 2D Vectors
	Vector2 operator * (const Vector2 & Mult)const;

	//Overloads "*" to be able to multiply 2D Vectors with a regular number
	Vector2 operator * (const float & Mult)const;

	//Overloads "==" to be able to compare 2D Vectors
	bool operator == (const Vector2 & equal) const;

	//Overloads "+=" to add and set a new value of 2D Vectors 
	void operator += (const Vector2 & plusEqual);

	//Overloads "-=" to add and set a new value of 2D Vectors 
	void operator -= (const Vector2 & subEqual);

	//Overloads "<<" to be able to print out 2D Vectors
	friend std::ostream& operator << (std::ostream& output, const Vector2 &v)
	{
		output << v.x << "," << v.y;
		return output;
	}


	//Math Problems

	//Adds two 2D Vectors
	Vector2 Add(const Vector2& A);

	//Subtracts two 2D Vectors
	Vector2 Substract(const Vector2& A);

	//Scalar Multiplies a 2D Vector
	//essentially multiplies a 2D Vector to a regular number
	Vector2 ScalarMult(float mult);

	//Gets the Magnitude of a 2D Vector
	//which is x squared + y squared, and all square rooted
	float Mag();

	//Normalizes a 3D vector
	//it uses x, and y, each divided by the Magnitude to get normalization
	Vector2 Normal();

	//Gets the Dot Product of 3D Vectors
	//Multiplies each Vectors x, and y together and then adds them together 
	float DotProd(const Vector2& A);


	//Get variables

	float Getx() const;
	float Gety() const;


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
	Vector3(float X, float Y, float Z);


	//Operator Over Loaders

	//Overloads "+" to be able to add 3D Vectors
	Vector3 operator + (const Vector3 & add)const;

	//Overloads "-" to be able to subract 3D Vectors
	Vector3 operator - (const Vector3 & Sub)const;

	//Overloads "*" to be able to multiply 3D Vectors
	Vector3 operator * (const Vector3 & Mult)const;

	//Overloads "*" to be able to multiply 3D Vectors with a regular number
	Vector3 operator * (const float & Mult)const;

	//Overloads "==" to be able to compare 3D Vectors
	bool operator == (const Vector3 & equal) const;

	//Overloads "+=" to add and set a new value of 2D Vectors 
	void operator += (const Vector3 & plusEqual);

	//Overloads "-=" to subtract and set a new value of 3D Vectors 
	void operator -= (const Vector3 & subEqual);

	//Overloads "<<" to be able to print out 3D Vectors
	friend std::ostream& operator << (std::ostream& output, const Vector3 v)
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
	Vector4(float X1, float Y1, float Z1, float W1);


	//Operator Over Loaders

	//Overloads "+" to be able to add 4D Vectors
	Vector4 operator + (const Vector4 & add)const;

	//Overloads "-" to be able to subract 4D Vectors
	Vector4 operator - (const Vector4 & Sub)const;

	//Overloads "*" to be able to multiply 4D Vectors
	Vector4 operator * (const Vector4 & Mult)const;

	//Overloads "*" to be able to multiply 4D Vectors with a regular number
	Vector4 operator * (const float & Mult)const;

	//Overloads "==" to be able to compare 4D Vectors
	bool operator == (const Vector4 & equal) const;

	//Overloads "+=" to add and set a new value of 4D Vectors 
	void operator += (const Vector4 & plusEqual);

	//Overloads "-=" to subtract and set a new value of 4D Vectors 
	void operator -= (const Vector4 & subEqual);

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


//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////



////////////////////
//	MATRICES	  //
////////////////////





////////////////////
//	2D Matrix	  //
////////////////////
class Matrix2
{
	///////////////
	// 2D Matrix //
	//	X1 , Y1  //
	//  X2 , Y2  //
	///////////////

private:
	float
		X1, Y1,
		X2, Y2;

public:

	// Constructors
	Matrix2() {};

	Matrix2(
		float x1, float y1,
		float x2, float y2);



	// Operator Overloaders

	Matrix2 operator* (const Matrix2 & mult) const;


	Vector2 operator * (const Vector2 & a);

	bool operator == (Matrix2 & other)const;

	friend std::ostream &operator << (std::ostream &output, const Matrix2 & v)
	{
		output << v.X1 << "," << v.Y1 << "\n" << v.X2 << "," << v.Y2;
		return output;
	}


	~Matrix2() {};
};




////////////////////
//	3D Matrix	  //
////////////////////
class Matrix3
{
	///////////////////
	//	 3D Matrix	 //
	//	X1 , Y1 , Z1 //
	//  X2 , Y2 , Z2 //
	//  X3 , Y3 , Z3 //
	///////////////////

private:
	float
		x1, y1, z1,
		x2, y2, z2,
		x3, y3, z3;

public:
	Matrix3() {};
	Matrix3(
		float X1, float Y1, float Z1,
		float X2, float Y2, float Z2,
		float X3, float Y3, float Z3);

	Matrix3 operator* (const Matrix3 & mult) const;

	bool operator == (Matrix3 & other)const;

	friend std::ostream &operator << (std::ostream &output, const Matrix3 & v)
	{
		output << v.x1 << "," << v.y1 << "," << v.z1 << "\n" << v.x2 << "," << v.y2 << "," << v.z2 << "\n" << v.x3 << "," << v.y3 << "," << v.z3;
		return output;
	}

	Matrix3 setrotateX(float angle)const;

	Matrix3 setRotateY(float angle)const;

	Matrix3 setrotateZ(float angle)const;

	~Matrix3() {};
};




////////////////////
//	4D Matrix	  //
////////////////////
class Matrix4
{
	//////////////////////////
	//		4D Matrix		//
	//	X1 , Y1 , Z1 , W1	//
	//  X2 , Y2 , Z2 , W2	//
	//  X3 , Y3 , Z3 , W3	//
	//  X4 , Y4 , Z4 , W4	//
	//////////////////////////

private:
	float
		x1, y1, z1, w1,
		x2, y2, z2, w2,
		x3, y3, z3, w3,
		x4, y4, z4, w4;

public:
	Matrix4() {};
	Matrix4(
		float X1, float Y1, float Z1, float W1,
		float X2, float Y2, float Z2, float W2,
		float X3, float Y3, float Z3, float W3,
		float X4, float Y4, float Z4, float W4);

	Matrix4 operator * (const Matrix4 & mult) const;

	bool operator == (Matrix4 & other)const;

	friend std::ostream &operator << (std::ostream &output, const Matrix4 & v)
	{
		output << v.x1 << "," << v.y1 << "," << v.z1 << "," << v.w1 << "\n" << v.x2 << "," << v.y2 << "," << v.z2 << "," << v.w2 << "\n" << v.x3 << "," << v.y3 << "," << v.z3 << "," << v.w3 << "\n" << v.x4 << "," << v.y4 << "," << v.z4 << "," << v.w4;
		return output;
	}

	Matrix4 setrotateX(float angle)const;

	Matrix4 setRotateY(float angle)const;

	Matrix4 setrotateZ(float angle)const;

	~Matrix4() {};
};