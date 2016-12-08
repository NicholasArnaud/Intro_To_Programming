#pragma once


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

double pi = 3.141592653589793238462643383279;


class BaseShape
{
public:
	virtual void DebugPrint() = 0;
};


class Point : public BaseShape
{

public:
	Point(float x, float y);
	~Point();
private:
	float x;
	float y;
};


class Line : public BaseShape
{
public:
	Line(float x1, float y1, float x2 , float y2);
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
	Triangle(float x1, float y1, float x2, float y2, float x3, float y3);
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
	Rectangle(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);
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


class Circle : public BaseShape
{
public:
	Circle(double rad, float center);
	~Circle();
private:
	double rad;
	float center;
};



//Debug Printing

 void  Point::BaseShape::DebugPrint() override
{
	 Point A;
	 std::cout << "Position: " << A.x << A.y << "\n";
}


void Line::BaseShape::DebugPrint()
{

}


void Triangle::BaseShape::DebugPrint()
{

}


void Rectangle::BaseShape::DebugPrint()
{

}


void Circle::BaseShape::DebugPrint()
{

}