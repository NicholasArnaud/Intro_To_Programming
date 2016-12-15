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
	Vector2 operator + (const Vector2 & RHS)const;

	//Overloads "-" to be able to subtract 2D Vectors
	Vector2 operator - (const Vector2 & RHS)const;

	//Overloads "*" to be able to multiply 2D Vectors
	Vector2 operator * (const Vector2 & RHS)const;

	//Overloads "*" to be able to multiply 2D Vectors with a regular number
	Vector2 operator * (const float & RHS)const;

	//Overloads "==" to be able to compare 2D Vectors
	bool operator == (const Vector2 & RHS) const;

	//Overloads "+=" to add and set a new value of 2D Vectors 
	void operator += (const Vector2 & RHS);

	//Overloads "-=" to add and set a new value of 2D Vectors 
	void operator -= (const Vector2 & RHS);

	//Overloads "<<" to be able to print out 2D Vectors
	friend std::ostream& operator << (std::ostream& output, const Vector2 & v)
	{
		output << v.m_x << "," << v.m_y;
		return output;
	}


	//Math Problems

	//Gets the Magnitude of a 2D Vector
	//which is x squared + y squared, and all square rooted
	float Magnitude();

	//Normalizes a 3D vector
	//it uses x, and y, each divided by the Magnitude to get normalization
	Vector2 Normalize();

	//Gets the Dot Product of 3D Vectors
	//Multiplies each Vectors x, and y together and then adds them together 
	float Dot(const Vector2& RHS);


	//Get variables

	float Getx() const;
	float Gety() const;


private:
	float m_x, m_y;
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
	Vector3 operator + (const Vector3 & RHS)const;

	//Overloads "-" to be able to subtract 3D Vectors
	Vector3 operator - (const Vector3 & RHS)const;

	//Overloads "*" to be able to multiply 3D Vectors
	Vector3 operator * (const Vector3 & RHS)const;

	//Overloads "*" to be able to multiply 3D Vectors with a regular number
	Vector3 operator * (const float & RHS)const;

	//Overloads "==" to be able to compare 3D Vectors
	bool operator == (const Vector3 & RHS) const;

	//Overloads "+=" to add and set a new value of 2D Vectors 
	void operator += (const Vector3 & RHS);

	//Overloads "-=" to subtract and set a new value of 3D Vectors 
	void operator -= (const Vector3 & RHS);

	//Overloads "<<" to be able to print out 3D Vectors
	friend std::ostream& operator << (std::ostream& output, const Vector3 v)
	{
		output << v.m_x << "," << v.m_y << "," << v.m_z;
		return output;
	}


	//Math Problems



	//Gets the Magnitude of a 3D Vector
	//which is x squared + y squared + z squared, and all square rooted
	float Magnitude();

	//Normalizes a 3D vector
	//it uses x,y,and z each divided by the Magnitude to get normalization
	Vector3 Normalize();

	//Gets the Dot Product of 3D Vectors
	//Multiplies each Vectors x,y, and z together and then adds them together 
	float Dot(const Vector3& RHS);

	//Gets the Cross Product of two 3D Vectors
	//Cross multiplies the two vectors
	Vector3 CrossProduct(const Vector3& RHS)const;


private:
	float m_x, m_y, m_z;
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
	Vector4 operator + (const Vector4 & RHS)const;

	//Overloads "-" to be able to subtract 4D Vectors
	Vector4 operator - (const Vector4 & RHS)const;

	//Overloads "*" to be able to multiply 4D Vectors
	Vector4 operator * (const Vector4 & RHS)const;

	//Overloads "*" to be able to multiply 4D Vectors with a regular number
	Vector4 operator * (const float & RHS)const;

	//Overloads "==" to be able to compare 4D Vectors
	bool operator == (const Vector4 & RHS) const;

	//Overloads "+=" to add and set a new value of 4D Vectors 
	void operator += (const Vector4 & RHS);

	//Overloads "-=" to subtract and set a new value of 4D Vectors 
	void operator -= (const Vector4 & RHS);

	//Overloads "<<" to be able to print out 4D Vectors
	friend std::ostream &operator << (std::ostream &output, const Vector4 & v)
	{
		output << v.m_x << ", " << v.m_y << ", " << v.m_z << ", " << v.m_w;
		return output;
	}



	//Math Problems


	//Gets the Magnitude of a 4D Vector
	//which is x squared + y squared + z squared + w squared, and all square rooted
	float Magnitude();

	//Normalizes a 4D vector
	//it uses x, y, z and w each divided by the Magnitude to get normalization
	Vector4 Normalize();

	//Gets the Dot Product of 4D Vectors
	//Multiplies each Vectors x,y, z and w together and then adds them together
	float Dot(const Vector4& RHS);


private:
	float m_x, m_y, m_z, m_w;
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

	Matrix2 operator* (const Matrix2 & RHS) const;


	Vector2 operator * (const Vector2 & RHS);

	bool operator == (Matrix2 & RHS)const;

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

	Matrix3 operator* (const Matrix3 & RHS) const;

	bool operator == (Matrix3 & RHS)const;

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

	Matrix4 operator * (const Matrix4 & RHS) const;

	bool operator == (Matrix4 & RHS)const;

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