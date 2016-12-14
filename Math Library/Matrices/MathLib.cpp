// compile with: /c /EHsc
// post-build command: lib MathFuncsLib.obj

#include "MathLib.h"
#include <iostream>


#pragma region Vector2
Vector2::Vector2(float X1, float Y1)
{
	x = X1;
	y = Y1;
}

Vector2 Vector2::operator + (const Vector2 & add) const
{Vector2 ADD;
	ADD.x = x + add.x;
	ADD.y = y + add.y;
	return ADD;
}

Vector2 Vector2::operator-(const Vector2 & Sub) const
{
	Vector2 SUB;
	SUB.x = x - Sub.x;
	SUB.y = y - Sub.y;
	return SUB;
}

Vector2 Vector2::operator*(const Vector2 & Mult) const
{
	Vector2 MULT;
	MULT.x = x * Mult.x;
	MULT.y = y * Mult.y;
	return MULT;
}

Vector2 Vector2::operator*(const float & Mult) const
{
	Vector2 MULT;
	MULT.x = x * Mult;
	MULT.y = y * Mult;
	return MULT;
}

bool Vector2::operator==(const Vector2 & equal) const
{
	return (x == equal.x && y == equal.y);
}

void Vector2::operator+=(const Vector2 & plusEqual)
{
	x = x + plusEqual.x;
	y = y + plusEqual.y;
}

void Vector2::operator-=(const Vector2 & subEqual)
{
	x = x - subEqual.x;
	y = y - subEqual.y;
}

Vector2 Vector2::Add(const Vector2 & A)
{
	// [Addition] 
	//  ->A + ->B = ->C   =>  <Ax + By, Ay + By...., An, Bn>
	Vector2 tmp = Vector2(x + A.x, y + A.y);
	return tmp;
}

Vector2 Vector2::Substract(const Vector2 & A)
{
	// [Subtraction]
	// ->A -  ->B = ->C   =>  <Ax - Bx, Ay - By, ..., An - Bn>
	Vector2 tmp = Vector2(x - A.x, y - A.y);
	return tmp;
}

Vector2 Vector2::ScalarMult(float mult)
{
	// [Scalar Multipling]
	//  Let K be a constant Variable
	//  K   ->A  =>  < K . Ax, K . Ay>
	Vector2 tmp = Vector2(x * mult, y * mult);
	return tmp;
}

float Vector2::Mag()
{
	// [Magnitude] 
	//  |->A|  =>  \| Ax * Ax + Ay * Ay
	return sqrt((x * x) + (y*y));
}

Vector2 Vector2::Normal()
{
	// [Normalize]
	//  ^A  => < Ax/|->A| , Ay/|->A|>
	Vector2 tmp = Vector2(x / Mag(), y / Mag());
	return tmp;
}

float Vector2::DotProd(const Vector2 & A)
{
	//[Dot Product]
	//  ->A * ->B = Ax Bx + Ay By +.... An Bn
	return (x *A.x) + (y*A.y);
}

float Vector2::Getx() const
{
	return x;
}

float Vector2::Gety() const
{
	return y;
}
#pragma endregion


#pragma region Vector3
Vector3::Vector3(float X, float Y, float Z)
{
	x = X;
	y = Y;
	z = Z;
}

Vector3 Vector3::operator+(const Vector3 & add) const
{
	Vector3 ADD;
	ADD.x = x + add.x;
	ADD.y = y + add.y;
	ADD.z = z + add.z;
	return ADD;
}

Vector3 Vector3::operator-(const Vector3 & Sub) const
{
	Vector3 SUB;
	SUB.x = x - Sub.x;
	SUB.y = y - Sub.y;
	SUB.z = z - Sub.z;
	return SUB;
}

Vector3 Vector3::operator*(const Vector3 & Mult) const
{
	Vector3 MULT;
	MULT.x = x * Mult.x;
	MULT.y = y * Mult.y;
	MULT.z = z * Mult.z;
	return MULT;
}

Vector3 Vector3::operator*(const float & Mult) const
{
	Vector3 MULT;
	MULT.x = x * Mult;
	MULT.y = y * Mult;
	MULT.z = z * Mult;
	return MULT;
}

bool Vector3::operator==(const Vector3 & equal) const
{
	return (x == equal.x && y == equal.y && z == equal.z);
}

void Vector3::operator+=(const Vector3 & plusEqual)
{
	x = x + plusEqual.x;
	y = y + plusEqual.y;
	z = z + plusEqual.z;
}

void Vector3::operator-=(const Vector3 & subEqual)
{
	x = x - subEqual.x;
	y = y - subEqual.y;
	z = z - subEqual.z;
}



#pragma endregion


#pragma region Vector4

Vector4::Vector4(float X1, float Y1, float Z1, float W1)
{
	x = X1;
	y = Y1;
	z = Z1;
	w = W1;
}

Vector4 Vector4::operator+(const Vector4 & add) const
{
	Vector4 ADD;
	ADD.x = x + add.x;
	ADD.y = y + add.y;
	ADD.z = z + add.z;
	ADD.w = w + add.w;
	return ADD;
}

Vector4 Vector4::operator-(const Vector4 & Sub) const
{
	Vector4 SUB;
	SUB.x = x - Sub.x;
	SUB.y = y - Sub.y;
	SUB.z = z - Sub.z;
	SUB.w = w - Sub.w;
	return SUB;
}

Vector4 Vector4::operator*(const Vector4 & Mult) const
{
	Vector4 MULT;
	MULT.x = x * Mult.x;
	MULT.y = y * Mult.y;
	MULT.z = z * Mult.z;
	MULT.w = w * Mult.w;
	return MULT;
}

Vector4 Vector4::operator*(const float & Mult) const
{
	Vector4 MULT;
	MULT.x = x * Mult;
	MULT.y = y * Mult;
	MULT.z = z * Mult;
	MULT.w = w * Mult;
	return MULT;
}

bool Vector4::operator==(const Vector4 & equal) const
{
	return ((x == equal.x) && (y == equal.y) && (z == equal.z) && (w == equal.w));
}

void Vector4::operator+=(const Vector4 & plusEqual)
{
	x = x + plusEqual.x;
	y = y + plusEqual.y;
	z = z + plusEqual.z;
	w = w + plusEqual.w;
}

void Vector4::operator-=(const Vector4 & subEqual)
{
	x = x - subEqual.x;
	y = y - subEqual.y;
	z = z - subEqual.z;
	w = w - subEqual.w;
}


#pragma endregion


#pragma region Matrix2

Matrix2::Matrix2(float x1, float y1, float x2, float y2)
{
	X1 = x1;
	Y1 = y1;
	X2 = x2;
	Y2 = y2;
}

Matrix2 Matrix2::operator*(const Matrix2 & mult) const
{
	Matrix2 Combo;
	Combo.X1 = (X1 * mult.X1) + (Y1 * mult.X2);
	Combo.Y1 = (X1 * mult.Y1) + (Y1 * mult.Y2);
	Combo.X2 = (X2 * mult.X1) + (Y2 * mult.X2);
	Combo.Y2 = (X2 * mult.Y1) + (Y2 * mult.Y2);
	return Combo;
}

Vector2 Matrix2::operator*(const Vector2 & a)
{
	float x = (a.Getx() * this->X1) + (a.Gety() * this->X2);
	float y = (a.Getx() * this->Y1) + (a.Gety() * this->Y2);
	Vector2 tmpV = Vector2(x, y);
	return tmpV;
}

bool Matrix2::operator==(Matrix2 & other) const
{
	return (X1 == other.X1 && Y1 == other.Y1 && X2 == other.X2 && Y2 == other.Y2);
}

#pragma endregion


#pragma region Matrix3
Matrix3::Matrix3(float X1, float Y1, float Z1, float X2, float Y2, float Z2, float X3, float Y3, float Z3)
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

Matrix3 Matrix3::operator*(const Matrix3 & mult) const
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

bool Matrix3::operator==(Matrix3 & other) const
{
	return (x1 == other.x1 && y1 == other.y1 && z1 == other.z1 && x2 == other.x2 && y2 == other.y2 && z2 == other.z2 && x3 == other.x3 && y3 == other.y3 && z3 == other.z3);
}

Matrix3 Matrix3::setrotateX(float angle) const
{
	Matrix3 tmp;
	if (angle == 90)
	{
		Matrix3 rotMatrix = Matrix3(
			1, 0, 0,
			0, 0, -1,
			0, 1, 0);
		tmp = rotMatrix * *this;
	}
	else
	{
		Matrix3 rotMatrix = Matrix3(
			1, 0, 0,
			0, cos(angle), -sin(angle),
			0, sin(angle), cos(angle));
		tmp = rotMatrix * *this;
	}

	return  tmp;
}

Matrix3 Matrix3::setRotateY(float angle) const
{
	Matrix3 tmp;
	if (angle == 90)
	{
		Matrix3 rotMatrix = Matrix3(
			0, 0, -1,
			0, 1, 0,
			1, 0, 0);
		tmp = rotMatrix * *this;
	}
	else
	{
		Matrix3 rotMatrix = Matrix3(
			cos(angle), 0, -sin(angle),
			0, 1, 0,
			sin(angle), 0, cos(angle));
		tmp = rotMatrix * *this;
	}

	return  tmp;
}

Matrix3 Matrix3::setrotateZ(float angle) const
{
	Matrix3 tmp;
	if (angle == 90)
	{
		Matrix3 rotMatrix = Matrix3(
			0, -1, 0,
			1, 0, 0,
			0, 0, 1);
		tmp = rotMatrix * *this;
	}
	else
	{
		Matrix3 rotMatrix = Matrix3(
			cos(angle), -sin(angle), 0,
			sin(angle), cos(angle), 0,
			0, 0, 1);
		tmp = rotMatrix * *this;
	}

	return  tmp;
}


#pragma endregion


#pragma region Matrix4

Matrix4::Matrix4(float X1, float Y1, float Z1, float W1, float X2, float Y2, float Z2, float W2, float X3, float Y3, float Z3, float W3, float X4, float Y4, float Z4, float W4)
{
	x1 = X1;
	y1 = Y1;
	z1 = Z1;
	w1 = W1;
	x2 = X2;
	y2 = Y2;
	z2 = Z2;
	w2 = W2;
	x3 = X3;
	y3 = Y3;
	z3 = Z3;
	w3 = W3;
	x4 = X4;
	y4 = Y4;
	z4 = Z4;
	w4 = W4;
}

Matrix4 Matrix4::operator*(const Matrix4 & mult) const
{
	Matrix4 Combo;

	Combo.x1 = (x1 * mult.x1) + (y1 * mult.x2) + (z1 * mult.x3) + (w1 * mult.x4);
	Combo.y1 = (x1 * mult.y1) + (y1 * mult.y2) + (z1 * mult.y3) + (w1 * mult.y4);
	Combo.z1 = (x1 * mult.z1) + (y1 * mult.z2) + (z1 * mult.z3) + (w1 * mult.z4);
	Combo.w1 = (x1 * mult.w1) + (y1 * mult.w2) + (z1 * mult.w3) + (w1 * mult.w4);

	Combo.x2 = (x2 * mult.x1) + (y2 * mult.x2) + (z2 * mult.x3) + (w2 * mult.x4);
	Combo.y2 = (x2 * mult.y1) + (y2 * mult.y2) + (z2 * mult.y3) + (w2 * mult.y4);
	Combo.z2 = (x2 * mult.z1) + (y2 * mult.z2) + (z2 * mult.z3) + (w2 * mult.z4);
	Combo.w2 = (x2 * mult.w1) + (y2 * mult.w2) + (z2 * mult.w3) + (w2 * mult.w4);

	Combo.x3 = (x3 * mult.x1) + (y3 * mult.x2) + (z3 * mult.x3) + (w3 * mult.x4);
	Combo.y3 = (x3 * mult.y1) + (y3 * mult.y2) + (z3 * mult.y3) + (w3 * mult.y4);
	Combo.z3 = (x3 * mult.z1) + (y3 * mult.z2) + (z3 * mult.z3) + (w3 * mult.z4);
	Combo.w3 = (x3 * mult.w1) + (y3 * mult.w2) + (z3 * mult.w3) + (w3 * mult.w4);

	Combo.x4 = (x4 * mult.x1) + (y4 * mult.x2) + (z4 * mult.x3) + (w4 * mult.x4);
	Combo.y4 = (x4 * mult.y1) + (y4 * mult.y2) + (z4 * mult.y3) + (w4 * mult.y4);
	Combo.z4 = (x4 * mult.z1) + (y4 * mult.z2) + (z4 * mult.z3) + (w4 * mult.z4);
	Combo.w4 = (x4 * mult.w1) + (y4 * mult.w2) + (z4 * mult.w3) + (w4 * mult.w4);

	return Combo;
}

bool Matrix4::operator==(Matrix4 & other) const
{
	return(x1 == other.x1 && y1 == other.y1 && z1 == other.z1 && w1 == other.w1 && x2 == other.x2 && y2 == other.y2 && z2 == other.z2 && w2 == other.w2 && x3 == other.x3 && y3 == other.y3 && z3 == other.z3 && w3 == other.w3 && x4 == other.x4 && y4 == other.y4 && z4 == other.z4 && w4 == other.w4);
}

Matrix4 Matrix4::setrotateX(float angle) const
{
	Matrix4 tmp;
	if (angle == 90)
	{
		Matrix4 rotMatrix = Matrix4(
			1, 0, 0, 0,
			0, 0, -1, 0,
			0, 1, 0, 0,
			0, 0, 0, 1);
		tmp = rotMatrix * *this;
	}
	else
	{
		Matrix4 rotMatrix = Matrix4(
			1, 0, 0, 0,
			0, cos(angle), -sin(angle), 0,
			0, sin(angle), cos(angle), 0,
			0, 0, 0, 1);
		tmp = rotMatrix * *this;
	}
	return  tmp;
}

Matrix4 Matrix4::setRotateY(float angle) const
{
	Matrix4 tmp;
	if (angle == 90)
	{
		Matrix4 rotMatrix = Matrix4(
			0, 0, -1, 0,
			0, 1, 0, 0,
			1, 0, 0, 0,
			0, 0, 0, 1);
		tmp = rotMatrix * *this;
	}
	else
	{
		Matrix4 rotMatrix = Matrix4(
			cos(angle), 0, -sin(angle), 0,
			0, 1, 0, 0,
			sin(angle), 0, cos(angle), 0,
			0, 0, 0, 1);
		tmp = rotMatrix * *this;
	}
	return  tmp;
}

Matrix4 Matrix4::setrotateZ(float angle) const
{
	Matrix4 tmp;
	if (angle == 90)
	{
		Matrix4 rotMatrix = Matrix4(
			0, -1, 0, 0,
			1, 0, 0, 0,
			0, 0, 1, 0,
			0, 0, 0, 1);
		tmp = rotMatrix * *this;
	}
	else
	{
		Matrix4 rotMatrix = Matrix4(
			cos(angle), -sin(angle), 0, 0,
			sin(angle), cos(angle), 0, 0,
			0, 0, 1, 0,
			0, 0, 0, 1);
		tmp = rotMatrix * *this;
	}
	return  tmp;
}



#pragma endregion