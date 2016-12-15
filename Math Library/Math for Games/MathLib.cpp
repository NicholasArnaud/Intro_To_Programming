

#include "MathLib.h"
#include <iostream>


#pragma region Vector2

Vector2::Vector2(float X, float Y)
{
	m_x = X;
	m_y = Y;
}

Vector2 Vector2::operator + (const Vector2 & RHS) const
{Vector2 ADD;
	ADD.m_x = m_x + RHS.m_x;
	ADD.m_y = m_y + RHS.m_y;
	return ADD;
}

Vector2 Vector2::operator-(const Vector2 & RHS) const
{
	Vector2 SUB;
	SUB.m_x = m_x - RHS.m_x;
	SUB.m_y = m_y - RHS.m_y;
	return SUB;
}

Vector2 Vector2::operator*(const Vector2 & RHS) const
{
	Vector2 MULT;
	MULT.m_x = m_x * RHS.m_x;
	MULT.m_y = m_y * RHS.m_y;
	return MULT;
}

Vector2 Vector2::operator*(const float & RHS) const
{
	Vector2 MULT;
	MULT.m_x = m_x * RHS;
	MULT.m_y = m_y * RHS;
	return MULT;
}

bool Vector2::operator==(const Vector2 & RHS) const
{
	return (m_x == RHS.m_x && m_y == RHS.m_y);
}

void Vector2::operator+=(const Vector2 & RHS)
{
	m_x = m_x + RHS.m_x;
	m_y = m_y + RHS.m_y;
}

void Vector2::operator-=(const Vector2 & RHS)
{
	m_x = m_x - RHS.m_x;
	m_y = m_y - RHS.m_y;
}


float Vector2::Magnitude()
{
	// [Magnitude] 
	//  |->A|  =>  \| Ax * Ax + Ay * Ay
	return sqrt((m_x * m_x) + (m_y*m_y));
}

Vector2 Vector2::Normalize()
{
	// [Normalize]
	//  ^A  => < Ax/|->A| , Ay/|->A|>
	Vector2 tmp = Vector2(m_x / Magnitude(), m_y / Magnitude());
	return tmp;
}

float Vector2::Dot(const Vector2 & RHS)
{
	//[Dot Product]
	//  ->A * ->B = Ax Bx + Ay By +.... An Bn
	return (m_x *RHS.m_x) + (m_y*RHS.m_y);
}

float Vector2::Getx() const
{
	return m_x;
}

float Vector2::Gety() const
{
	return m_y;
}
#pragma endregion


#pragma region Vector3

Vector3::Vector3(float X, float Y, float Z)
{
	m_x = X;
	m_y = Y;
	m_z = Z;
}

Vector3 Vector3::operator+(const Vector3 & RHS) const
{
	Vector3 ADD;
	ADD.m_x = m_x + RHS.m_x;
	ADD.m_y = m_y + RHS.m_y;
	ADD.m_z = m_z + RHS.m_z;
	return ADD;
}

Vector3 Vector3::operator-(const Vector3 & RHS) const
{
	Vector3 SUB;
	SUB.m_x = m_x - RHS.m_x;
	SUB.m_y = m_y - RHS.m_y;
	SUB.m_z = m_z - RHS.m_z;
	return SUB;
}

Vector3 Vector3::operator*(const Vector3 & RHS) const
{
	Vector3 MULT;
	MULT.m_x = m_x * RHS.m_x;
	MULT.m_y = m_y * RHS.m_y;
	MULT.m_z = m_z * RHS.m_z;
	return MULT;
}

Vector3 Vector3::operator*(const float & RHS) const
{
	Vector3 MULT;
	MULT.m_x = m_x * RHS;
	MULT.m_y = m_y * RHS;
	MULT.m_z = m_z * RHS;
	return MULT;
}

bool Vector3::operator==(const Vector3 & RHS) const
{
	return (m_x == RHS.m_x && m_y == RHS.m_y && m_z == RHS.m_z);
}

void Vector3::operator+=(const Vector3 & RHS)
{
	m_x = m_x + RHS.m_x;
	m_y = m_y + RHS.m_y;
	m_z = m_z + RHS.m_z;
}

void Vector3::operator-=(const Vector3 & RHS)
{
	m_x = m_x - RHS.m_x;
	m_y = m_y - RHS.m_y;
	m_z = m_z - RHS.m_z;
}


float Vector3::Magnitude()
{
	// [Magnitude] 
	//  |->A|  =>  \| Ax * Ax + Ay * Ay
	return sqrt((m_x * m_x) + (m_y*m_y) + (m_z*m_z));
}

Vector3 Vector3::Normalize()
{
	// [Normalize]
	//  ^A  => < Ax/|->A| , Ay/|->A|>
	Vector3 tmp = Vector3(m_x / Magnitude(), m_y / Magnitude(), m_z / Magnitude());
	return tmp;
}

float Vector3::Dot(const Vector3 & RHS)
{
	//[Dot Product]
	//  ->A * ->B = Ax Bx + Ay By +.... An Bn
	return (m_x *RHS.m_x) + (m_y*RHS.m_y) + (m_z*RHS.m_z);
}

Vector3 Vector3::CrossProduct(const Vector3 & RHS) const
{
	//[Cross Product]
	// ->A X ->B  =  
	// Ay Bz - Az By , x
	// Ax Bz - Az Bx , y
	// Ax By - Ay Bx , z
	
	return Vector3(m_y *RHS.m_z - m_z * RHS.m_y, m_z * RHS.m_x - m_x * RHS.m_z, m_x* RHS.m_y - m_y* RHS.m_x);
}


#pragma endregion


#pragma region Vector4

Vector4::Vector4(float X1, float Y1, float Z1, float W1)
{
	m_x = X1;
	m_y = Y1;
	m_z = Z1;
	m_w = W1;
}

Vector4 Vector4::operator+(const Vector4 & RHS) const
{
	Vector4 ADD;
	ADD.m_x = m_x + RHS.m_x;
	ADD.m_y = m_y + RHS.m_y;
	ADD.m_z = m_z + RHS.m_z;
	ADD.m_w = m_w + RHS.m_w;
	return ADD;
}

Vector4 Vector4::operator-(const Vector4 & RHS) const
{
	Vector4 SUB;
	SUB.m_x = m_x - RHS.m_x;
	SUB.m_y = m_y - RHS.m_y;
	SUB.m_z = m_z - RHS.m_z;
	SUB.m_w = m_w - RHS.m_w;
	return SUB;
}

Vector4 Vector4::operator*(const Vector4 & RHS) const
{
	Vector4 MULT;
	MULT.m_x = m_x * RHS.m_x;
	MULT.m_y = m_y * RHS.m_y;
	MULT.m_z = m_z * RHS.m_z;
	MULT.m_w = m_w * RHS.m_w;
	return MULT;
}

Vector4 Vector4::operator*(const float & RHS) const
{
	Vector4 MULT;
	MULT.m_x = m_x * RHS;
	MULT.m_y = m_y * RHS;
	MULT.m_z = m_z * RHS;
	MULT.m_w = m_w * RHS;
	return MULT;
}

bool Vector4::operator==(const Vector4 & RHS) const
{
	return ((m_x == RHS.m_x) && (m_y == RHS.m_y) && (m_z == RHS.m_z) && (m_w == RHS.m_w));
}

void Vector4::operator+=(const Vector4 & RHS)
{
	m_x = m_x + RHS.m_x;
	m_y = m_y + RHS.m_y;
	m_z = m_z + RHS.m_z;
	m_w = m_w + RHS.m_w;
}

void Vector4::operator-=(const Vector4 & RHS)
{
	m_x = m_x - RHS.m_x;
	m_y = m_y - RHS.m_y;
	m_z = m_z - RHS.m_z;
	m_w = m_w - RHS.m_w;
}



float Vector4::Magnitude()
{
	// [Magnitude] 
	//  |->A|  =>  \| Ax * Ax + Ay * Ay
	return sqrt((m_x * m_x) + (m_y*m_y) + (m_z*m_z) + (m_w*m_w));
}

Vector4 Vector4::Normalize()
{
	// [Normalize]
	//  ^A  => < Ax/|->A| , Ay/|->A|>
	return Vector4(m_x / Magnitude(), m_y / Magnitude(), m_z / Magnitude(), m_w / Magnitude());
}

float Vector4::Dot(const Vector4 & RHS)
{
	//[Dot Product]
	//  ->A * ->B = Ax Bx + Ay By +.... An Bn
	return (m_x *RHS.m_x) + (m_y*RHS.m_y) + (m_z*RHS.m_z) + (m_w*RHS.m_w);
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

Matrix2 Matrix2::operator*(const Matrix2 & RHS) const
{
	Matrix2 Combo;
	Combo.X1 = (X1 * RHS.X1) + (Y1 * RHS.X2);
	Combo.Y1 = (X1 * RHS.Y1) + (Y1 * RHS.Y2);
	Combo.X2 = (X2 * RHS.X1) + (Y2 * RHS.X2);
	Combo.Y2 = (X2 * RHS.Y1) + (Y2 * RHS.Y2);
	return Combo;
}

Vector2 Matrix2::operator*(const Vector2 & RHS)
{
	float x = (RHS.Getx() * this->X1) + (RHS.Gety() * this->X2);
	float y = (RHS.Getx() * this->Y1) + (RHS.Gety() * this->Y2);
	Vector2 tmpV = Vector2(x, y);
	return tmpV;
}

bool Matrix2::operator==(Matrix2 & RHS) const
{
	return (X1 == RHS.X1 && Y1 == RHS.Y1 && X2 == RHS.X2 && Y2 == RHS.Y2);
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

Matrix3 Matrix3::operator*(const Matrix3 & RHS) const
{
	Matrix3 Combo;

	Combo.x1 = (x1 * RHS.x1) + (y1 * RHS.x2) + (z1 * RHS.x3);
	Combo.y1 = (x1 * RHS.y1) + (y1 * RHS.y2) + (z1 * RHS.y3);
	Combo.z1 = (x1 * RHS.z1) + (y1 * RHS.z2) + (z1 * RHS.z3);

	Combo.x2 = (x2 * RHS.x1) + (y2 * RHS.x2) + (z2 * RHS.x3);
	Combo.y2 = (x2 * RHS.y1) + (y2 * RHS.y2) + (z2 * RHS.y3);
	Combo.z2 = (x2 * RHS.z1) + (y2 * RHS.z2) + (z2 * RHS.z3);

	Combo.x3 = (x3 * RHS.x1) + (y3 * RHS.x2) + (z3 * RHS.x3);
	Combo.y3 = (x3 * RHS.y1) + (y3 * RHS.y2) + (z3 * RHS.y3);
	Combo.z3 = (x3 * RHS.z1) + (y3 * RHS.z2) + (z3 * RHS.z3);

	return Combo;
}

bool Matrix3::operator==(Matrix3 & RHS) const
{
	return (x1 == RHS.x1 && y1 == RHS.y1 && z1 == RHS.z1 && x2 == RHS.x2 && y2 == RHS.y2 && z2 == RHS.z2 && x3 == RHS.x3 && y3 == RHS.y3 && z3 == RHS.z3);
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

Matrix4 Matrix4::operator*(const Matrix4 & RHS) const
{
	Matrix4 Combo;

	Combo.x1 = (x1 * RHS.x1) + (y1 * RHS.x2) + (z1 * RHS.x3) + (w1 * RHS.x4);
	Combo.y1 = (x1 * RHS.y1) + (y1 * RHS.y2) + (z1 * RHS.y3) + (w1 * RHS.y4);
	Combo.z1 = (x1 * RHS.z1) + (y1 * RHS.z2) + (z1 * RHS.z3) + (w1 * RHS.z4);
	Combo.w1 = (x1 * RHS.w1) + (y1 * RHS.w2) + (z1 * RHS.w3) + (w1 * RHS.w4);

	Combo.x2 = (x2 * RHS.x1) + (y2 * RHS.x2) + (z2 * RHS.x3) + (w2 * RHS.x4);
	Combo.y2 = (x2 * RHS.y1) + (y2 * RHS.y2) + (z2 * RHS.y3) + (w2 * RHS.y4);
	Combo.z2 = (x2 * RHS.z1) + (y2 * RHS.z2) + (z2 * RHS.z3) + (w2 * RHS.z4);
	Combo.w2 = (x2 * RHS.w1) + (y2 * RHS.w2) + (z2 * RHS.w3) + (w2 * RHS.w4);

	Combo.x3 = (x3 * RHS.x1) + (y3 * RHS.x2) + (z3 * RHS.x3) + (w3 * RHS.x4);
	Combo.y3 = (x3 * RHS.y1) + (y3 * RHS.y2) + (z3 * RHS.y3) + (w3 * RHS.y4);
	Combo.z3 = (x3 * RHS.z1) + (y3 * RHS.z2) + (z3 * RHS.z3) + (w3 * RHS.z4);
	Combo.w3 = (x3 * RHS.w1) + (y3 * RHS.w2) + (z3 * RHS.w3) + (w3 * RHS.w4);

	Combo.x4 = (x4 * RHS.x1) + (y4 * RHS.x2) + (z4 * RHS.x3) + (w4 * RHS.x4);
	Combo.y4 = (x4 * RHS.y1) + (y4 * RHS.y2) + (z4 * RHS.y3) + (w4 * RHS.y4);
	Combo.z4 = (x4 * RHS.z1) + (y4 * RHS.z2) + (z4 * RHS.z3) + (w4 * RHS.z4);
	Combo.w4 = (x4 * RHS.w1) + (y4 * RHS.w2) + (z4 * RHS.w3) + (w4 * RHS.w4);

	return Combo;
}

bool Matrix4::operator==(Matrix4 & RHS) const
{
	return(x1 == RHS.x1 && y1 == RHS.y1 && z1 == RHS.z1 && w1 == RHS.w1 && x2 == RHS.x2 && y2 == RHS.y2 && z2 == RHS.z2 && w2 == RHS.w2 && x3 == RHS.x3 && y3 == RHS.y3 && z3 == RHS.z3 && w3 == RHS.w3 && x4 == RHS.x4 && y4 == RHS.y4 && z4 == RHS.z4 && w4 == RHS.w4);
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