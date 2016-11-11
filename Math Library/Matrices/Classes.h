#pragma once
#include <math.h>

////////////////////
//	VECTORS		  //
////////////////////




////////////////////
//	2D VECTOR	  //
////////////////////
class Vector2
{
public:
	Vector2() {};
	Vector2(float X1, float Y1)
	{
		x = X1;
		y = Y1;
	}


	//Operator Over Loaders
	Vector2 operator + (const Vector2 & add)const
	{
		Vector2 ADD;
		ADD.x = x + add.x;
		ADD.y = y + add.y;
		return ADD;
	}

	Vector2 operator - (const Vector2 & Sub)const
	{
		Vector2 SUB;
		SUB.x = x - Sub.x;
		SUB.y = y - Sub.y;
		return SUB;
	}

	Vector2 operator * (const Vector2 & Mult)const
	{
		Vector2 MULT;
		MULT.x = x * Mult.x;
		MULT.y = y * Mult.y;
		return MULT;
	}

	Vector2 operator * (const float & Mult)const
	{
		Vector2 MULT;
		MULT.x = x * Mult;
		MULT.y = y * Mult;
		return MULT;
	}	


	Vector2 Add(const Vector2& A)
	{
		// [Addition] 
		//  ->A + ->B = ->C   =>  <Ax + By, Ay + By...., An, Bn>
		Vector2 tmp = Vector2(x + A.x, y + A.y);
		return tmp;
	}

	Vector2 Substract(const Vector2& A)
	{
		// [Subtraction]
		// ->A -  ->B = ->C   =>  <Ax - Bx, Ay - By, ..., An - Bn>
		Vector2 tmp = Vector2(x - A.x, y - A.y);
		return tmp;
	}

	Vector2 ScalarMult(float mult)
	{
		// [Scalar Multipling]
		//  Let K be a constant Variable
		//  K   ->A  =>  < K . Ax, K . Ay>
		Vector2 tmp = Vector2(x * mult, y * mult);
		return tmp;
	}



	float Mag()
	{
		// [Magnitude] 
		//  |->A|  =>  \| Ax * Ax + Ay * Ay
		return sqrt((x * x) + (y*y));
	}

	Vector2 Normal()
	{
		// [Normalize]
		//  ^A  => < Ax/|->A| , Ay/|->A|>
		Vector2 tmp = Vector2(x / Mag(), y / Mag());
		return tmp;
	}

	float DotProd(const Vector2& A)
	{
		//[Dot Product]
		//  ->A * ->B = Ax Bx + Ay By +.... An Bn
		return (x *A.x) + (y*A.y);
	}


	bool operator == (const Vector2 & equal) const
	{
		return (x == equal.x && y == equal.y);
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
	Vector3() {};
	Vector3(float X, float Y, float Z)
	{
		x = X;
		y = Y;
		z = Z;
	};


	//Operator Over Loaders
	Vector3 operator + (const Vector3 & add)const
	{
		Vector3 ADD;
		ADD.x = x + add.x;
		ADD.y = y + add.y;
		ADD.z = z + add.z;
		return ADD;
	}

	Vector3 operator - (const Vector3 & Sub)const
	{
		Vector3 SUB;
		SUB.x = x - Sub.x;
		SUB.y = y - Sub.y;
		SUB.z = z - Sub.z;
		return SUB;
	}

	Vector3 operator * (const Vector3 & Mult)const
	{
		Vector3 MULT;
		MULT.x = x * Mult.x;
		MULT.y = y * Mult.y;
		MULT.z = z * Mult.z;
		return MULT;
	}
	Vector3 operator * (const float & Mult)const
	{
		Vector3 MULT;
		MULT.x = x * Mult;
		MULT.y = y * Mult;
		MULT.z = z * Mult;
		return MULT;
	}

	bool operator == (const Vector3 & equal) const
	{
		return (x == equal.x && y == equal.y && z == equal.z);

	}




	Vector3 Add(const Vector3& A)
	{
		// [Addition] 
		//  ->A + ->B = ->C   =>  <Ax + By, Ay + By...., An, Bn>
		Vector3 tmp = Vector3(x + A.x, y + A.y, z + A.z);
		return tmp;
	}

	Vector3 Substract(const Vector3& A)
	{
		// [Subtraction]
		// ->A -  ->B = ->C   =>  <Ax - Bx, Ay - By, ..., An - Bn>
		Vector3 tmp = Vector3(x - A.x, y - A.y, z - A.z);
		return tmp;
	}

	Vector3 ScalarMult(float mult)
	{
		// [Scalar Multipling]
		//  Let K be a constant Variable
		//  K   ->A  =>  < K . Ax, K . Ay>
		Vector3 tmp = Vector3(x * mult, y * mult, z* mult);
		return tmp;
	}



	float Mag()
	{
		// [Magnitude] 
		//  |->A|  =>  \| Ax * Ax + Ay * Ay
		return sqrt((x * x) + (y*y) + (z*z));
	}

	Vector3 Normal()
	{
		// [Normalize]
		//  ^A  => < Ax/|->A| , Ay/|->A|>
		Vector3 tmp = Vector3(x / Mag(), y / Mag(), z / Mag());
		return tmp;
	}

	float DotProd(const Vector3& A)
	{
		//[Dot Product]
		//  ->A * ->B = Ax Bx + Ay By +.... An Bn
		return (x *A.x) + (y*A.y) + (z*A.z);
	}

	Vector3 CrossProd(const Vector3& A)
	{
		//[Cross Product]
		// ->A X ->B  =  
		// Ay Bz - Az By , x
		// Ax Bz - Az Bx , y
		// Ax By - Ay Bx , z
		Vector3 tmp = Vector3(x *A.z - z * A.y, x * A.z - z * A.x, x* A.y - y* A.x);
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
	Vector4() {};
	Vector4(float X1, float Y1, float Z1, float W1)
	{
		x = X1;
		y = Y1;
		z = Z1;
		w = W1;
	};


	//Operator Over Loaders
	Vector4 operator + (const Vector4 & add)const
	{
		Vector4 ADD;
		ADD.x = x + add.x;
		ADD.y = y + add.y;
		ADD.z = z + add.z;
		ADD.w = w + add.w;
		return ADD;
	}

	Vector4 operator - (const Vector4 & Sub)const
	{
		Vector4 SUB;
		SUB.x = x - Sub.x;
		SUB.y = y - Sub.y;
		SUB.z = z - Sub.z;
		SUB.w = w - Sub.w;
		return SUB;
	}

	Vector4 operator * (const Vector4 & Mult)const
	{
		Vector4 MULT;
		MULT.x = x * Mult.x;
		MULT.y = y * Mult.y;
		MULT.z = z * Mult.z;
		MULT.w = w * Mult.w;
		return MULT;
	}

	Vector4 operator * (const float & Mult)const
	{
		Vector4 MULT;
		MULT.x = x * Mult;
		MULT.y = y * Mult;
		MULT.z = z * Mult;
		MULT.w = w * Mult;
		return MULT;
	}

	bool operator == (const Vector4 & equal) const
	{
		return ((x == equal.x) && (y == equal.y) && (z == equal.z) && (w == equal.w));

	}





	Vector4 Add(const Vector4& A)
	{
		// [Addition] 
		//  ->A + ->B = ->C   =>  <Ax + By, Ay + By...., An, Bn>
		Vector4 tmp = Vector4(x + A.x, y + A.y, z + A.z, w + A.w);
		return tmp;
	}

	Vector4 Substract(const Vector4& A)
	{
		// [Subtraction]
		// ->A -  ->B = ->C   =>  <Ax - Bx, Ay - By, ..., An - Bn>
		Vector4 tmp = Vector4(x - A.x, y - A.y, z - A.z, w - A.w);
		return tmp;
	}

	Vector4 ScalarMult(float mult)
	{
		// [Scalar Multipling]
		//  Let K be a constant Variable
		//  K   ->A  =>  < K . Ax, K . Ay>
		Vector4 tmp = Vector4(x * mult, y * mult, z * mult, w *mult);
		return tmp;
	}



	float Mag()
	{
		// [Magnitude] 
		//  |->A|  =>  \| Ax * Ax + Ay * Ay
		return sqrt((x * x) + (y*y));
	}

	Vector4 Normal()
	{
		// [Normalize]
		//  ^A  => < Ax/|->A| , Ay/|->A|>
		return Vector4(x / Mag(), y / Mag(), z / Mag(), w / Mag());
	}

	float DotProd(const Vector4& A)
	{
		//[Dot Product]
		//  ->A * ->B = Ax Bx + Ay By +.... An Bn
		return (x *A.x) + (y*A.y);
	}


private:
	float x, y, z, w;
};






////////////////////
//	MATRICES	  //
////////////////////





////////////////////
//	2D Matrix	  //
////////////////////
class Matrix2
{

	float X1, Y1, X2, Y2;

public:

	// Constructors
	Matrix2() {};

	Matrix2(float x1, float y1, float x2, float y2)
	{
		X1 = x1;
		Y1 = y1;
		X2 = x2;
		Y2 = y2;
		///////////////
		//  X1 , Y1  //
		//  X2 , Y2  //
		///////////////
	}

	

	// Operator Overloaders

	Matrix2 operator* (const Matrix2 & mult) const
	{
		Matrix2 Combo;

		Combo.X1 = (X1 * mult.X1) + (Y1 * mult.X2);
		Combo.Y1 = (X1 * mult.Y1) + (Y1 * mult.Y2);
		Combo.X2 = (X2 * mult.X1) + (Y2 * mult.X2);
		Combo.Y2 = (X2 * mult.Y1) + (Y2 * mult.Y2);


		return Combo;
	}


	Vector2 operator * (const Vector2 & a)
	{
	/*	Vector2 tmpV;
		Matrix2 tmpM;
		tmpV.Getx()= (a.Getx * tmpM.X1)+ (a.Gety * tmpM.X2);
		tmpV.Gety()= (a.Getx * tmpM.Y1)+ (a.Gety * tmpM.Y2);
		return tmpV;
		*/

		float x = (a.Getx() * this->X1) + (a.Gety() * this->X2);
		float y = (a.Getx() * this->Y1) + (a.Gety() * this->Y2);
		Vector2 tmpV = Vector2(x, y);
		return tmpV;
	}

	bool operator == (Matrix2 & other)const
	{
		return (X1 == other.X1 && Y1 == other.Y1 && X2 == other.X2 && Y2 == other.Y2);
	
	}

	

	~Matrix2() {};
};




////////////////////
//	3D Matrix	  //
////////////////////
class Matrix3
{
private:
	float x1, y1, z1, x2, y2, z2, x3, y3, z3;

public:
	Matrix3() {};
	Matrix3(float X1, float Y1, float Z1, float X2, float Y2, float Z2, float X3, float Y3, float Z3)
	{
		x1 = X1;
		y1 = Y1;
		z1 = Z1;
		x2 = X2;
		y2 = Y2;
		z2 = Z2;
		x3 = X3;
		y3 = Y3;
		z3 = Z3;
	}

	Matrix3 operator* (const Matrix3 & mult) const
	{
		Matrix3 Combo;
		
		Combo.x1 = (x1 * mult.x1) + (y1 * mult.x2) + (z1 * mult.x3);
		Combo.y1 = (x1 * mult.y1) + (y1 * mult.y2) + (z1 * mult.y3);
		Combo.z1 = (x1 * mult.z1) + (y1 * mult.z2) + (z1 * mult.z3);

		Combo.x2 = (x2 * mult.x1) + (y2 * mult.x2) + (z2 * mult.x3);
		Combo.y2 = (x2 * mult.y1) + (y2 * mult.y2) + (z2 * mult.y3);
		Combo.z2 = (x2 * mult.z1) + (y2 * mult.z2) + (z2 * mult.z3);

		Combo.x3 = (x3 * mult.x1) + (y3 * mult.x2) + (z3 * mult.x3);
		Combo.y3 = (x3 * mult.y1) + (y3 * mult.y2) + (z3 * mult.y3);
		Combo.z3 = (x3 * mult.z1) + (y3 * mult.z2) + (z3 * mult.z3);


		return Combo;
	}

	bool operator == (Matrix3 & other)const
	{
		if (x1 == other.x1 && y1 == other.y1 && z1 == other.z1 && x2 == other.x2 && y2 == other.y2 && z2 == other.z2 && x3 == other.x3 && y3 == other.y3 && z3 == other.z3)
			return 1;
		else
			return 0;
	}

	

	~Matrix3() {};
};