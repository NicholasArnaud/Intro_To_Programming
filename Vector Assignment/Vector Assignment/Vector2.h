#pragma once


//2D Vector
class Vector2D
{
public: 
	Vector2D() {};
	Vector2D(float X1, float Y1) 
	{
		this->x;
		this->y;
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
		this->x;
		this->y;
		this->z;
	};


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


	Vector3D ScalarMult(float Mult)
	{
		// [Scalar Multipling]
		//  Let K be a constant Variable
		//  K   ->A  =>  < K . Ax, K . Ay>
		Vector3D tmp = Vector3D(x * Mult, y * Mult, z* Mult);
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
		Vector3D tmp = Vector3D(x / Mag(), y / Mag(), z/Mag());
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
		Vector3D tmp = Vector3D( x *A.z - z * A.y, x * A.z - z * A.x, x* A.y - y* A.x);
		return tmp;
	}
		

private: 
	float x, y, z;
};