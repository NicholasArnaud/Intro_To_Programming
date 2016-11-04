#pragma once
#include <math.h>

////////////////////
//	VECTORS		  //
////////////////////
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
		return (x == equal.x && y == equal.y);
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
		return (x == equal.x && y == equal.y && z== equal.z);

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

class Vector4D
{
public:
	Vector4D() {};
	Vector4D(float X1, float Y1,float Z1, float W1)
	{
		x = X1;
		y = Y1;
		z = Z1;
		w = W1;
	};


	//Operator Over Loaders
	Vector4D operator + (const Vector4D & add)const
	{
		Vector4D ADD;
		ADD.x = x + add.x;
		ADD.y = y + add.y;
		ADD.z = z + add.z;
		ADD.w = w + add.w;
		return ADD;
	}

	Vector4D operator - (const Vector4D & Sub)const
	{
		Vector4D SUB;
		SUB.x = x - Sub.x;
		SUB.y = y - Sub.y;
		SUB.z = z - Sub.z;
		SUB.w = w - Sub.w;
		return SUB;
	}

	Vector4D operator * (const Vector4D & Mult)const
	{
		Vector4D MULT;
		MULT.x = x * Mult.x;
		MULT.y = y * Mult.y;
		MULT.z = z * Mult.z;
		MULT.w = w * Mult.w;
		return MULT;
	}

	bool operator == (const Vector4D & equal) const
	{
		return ((x == equal.x) && (y == equal.y) && (z== equal.z) && (w == equal.w));

	}





	Vector4D Add(const Vector4D& A)
	{
		// [Addition] 
		//  ->A + ->B = ->C   =>  <Ax + By, Ay + By...., An, Bn>
		Vector4D tmp = Vector4D(x + A.x, y + A.y, z +A.z, w+A.w);
		return tmp;
	}

	Vector4D Substract(const Vector4D& A)
	{
		// [Subtraction]
		// ->A -  ->B = ->C   =>  <Ax - Bx, Ay - By, ..., An - Bn>
		Vector4D tmp = Vector4D(x - A.x, y - A.y, z - A.z, w - A.w);
		return tmp;
	}

	Vector4D ScalarMult(float mult)
	{
		// [Scalar Multipling]
		//  Let K be a constant Variable
		//  K   ->A  =>  < K . Ax, K . Ay>
		Vector4D tmp = Vector4D(x * mult, y * mult, z * mult, w *mult);
		return tmp;
	}



	float Mag()
	{
		// [Magnitude] 
		//  |->A|  =>  \| Ax * Ax + Ay * Ay
		return sqrt((x * x) + (y*y));
	}

	Vector4D Normal()
	{
		// [Normalize]
		//  ^A  => < Ax/|->A| , Ay/|->A|>
		Vector4D tmp = Vector4D(x / Mag(), y / Mag(), z / Mag(), w / Mag());
		return tmp;
	}

	float DotProd(const Vector4D& A)
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

class Matrix2
{
	float x, y, z, w;

public:

// Constructors
	Matrix2() {};
	Matrix2(float X1, float Y1, float Z1, float W1)
	{
		x = X1;
		y = Y1;
		z = Z1;
		w = W1;
	};

	// Operator Overloaders
	Matrix2 operator + (const Matrix2 & add)const
	{
		
	}



};

class Matrix3
{
private:
	float a, b, c, d, e, f, g, h, i;

public:
	Matrix3() {};
	Matrix3(float A1, float B1, float C1, float D1, float E1, float F1, float G1, float H1, float I1)
	{
		a = A1;
		b = B1;
		c = C1;
		d = D1;
		e = E1;
		f = F1;
		g = G1;
		h = H1;
		i = I1;
	}

};