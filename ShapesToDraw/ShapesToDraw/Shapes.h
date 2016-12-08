#pragma once
#include <iostream>

/*
We need you to create a set of classes that represent 2D shapes
that we can use for various reasons in our new game.
We need the following shapes available to us
Point, Rectangle, Circle, Line, Triangle
- All shapes need to have a common base class called: BaseShape.
- BaseShape needs to define a pure virtual function called: void DebugPrint().
- Each shape's implementation of DebugPrint should print out all
of the attributes for the shape. How that string is formatted is up to you.
- Everything else is up to you, what attributes each shape is made up of,
how those attributes are accessed, etc.
*/


class BaseShape
{
public:
	virtual void DebugPrint() = 0;
};


class Point : public BaseShape
{

public:
	//Point();
	Point(float X, float Y)
	{
		x = X;
		y = Y;
	}

	~Point();
	void DebugPrint() override;

private:
	float x;
	float y;
};


class Line : public BaseShape
{
public:
	Line(float X1, float Y1, float X2, float Y2)
	{
		x1 = X1;
		y1 = Y1;
		x2 = X2;
		y2 = Y2;
	}
	void DebugPrint() override;
	~Line();
private:
	float x1;
	float y1;
	float x2;
	float y2;
	
};


class Triangle : public BaseShape
{
public:
	Triangle(float X1, float Y1, float X2, float Y2, float X3, float Y3)
	{
		x1 = X1;
		y1 = Y1;
		x2 = X2;
		y2 = Y2;
		x3 = X3;
		y3 = Y3;
	}
	void DebugPrint() override;
	~Triangle();
private:
	float x1;
	float y1;
	float x2;
	float y2;
	float x3;
	float y3;
	
};


class Rectangle : public BaseShape
{
public:
	Rectangle(float X1, float Y1, float X2, float Y2, float X3, float Y3, float X4, float Y4)
	{
		x1 = X1;
		y1 = Y1;
		x2 = X2;
		y2 = Y2;
		x3 = X3;
		y3 = Y3;
		x4 = X4;
		y4 = Y4;
	}
	void DebugPrint() override;
	~Rectangle();

private:
	float x1;
	float y1;
	float x2;
	float y2;
	float x3;
	float y3;
	float x4;
	float y4;
};


double pi = 3.141592653589793238462643383279;

class Circle : public BaseShape
{
public:
	Circle(double Rad, float Center)
	{
		rad = Rad;
		center = Center;
	}
	void DebugPrint() override;
	~Circle();
private:
	double rad;
	float center;
	
};




//Debug Printing

Point::~Point()
{
}

void Point::DebugPrint()
{
	std::cout << "Point Position: " << x << " , " << y << "\n\n";
}


Line::~Line()
{
}

void Line::DebugPrint()
{
	std::cout << "Line From:  " << x1 << " , " << y1 << "\n";
	std::cout << "Line To: " << x2 << " , " << y2 << "\n\n";
}


Triangle::~Triangle()
{
}

void Triangle::DebugPrint()
{
	std::cout << "Triangle Point A: " << x1 << " , " << y1 << "\n";
	std::cout << "Triangle Point B: " << x2 << " , " << y2 << "\n";
	std::cout << "Triangle Point C: " << x3 << " , " << y3 << "\n\n";
}


 Rectangle::~Rectangle()
{
}

void Rectangle::DebugPrint()
{
	std::cout << "Rectangle Point A: " << x1 << " , " << y1 << "\n";
	std::cout << "Rectangle Point B: " << x2 << " , " << y2 << "\n";
	std::cout << "Rectangle Point C: " << x3 << " , " << y3 << "\n";
	std::cout << "Rectangle Point D: " << x4 << " , " << y4 << "\n\n";
}



Circle::~Circle()
{
}

void Circle::DebugPrint()
{

}