#include<iostream>
#include"Shape.h"

Shape::Shape() 
{
	area_ = 1;
}

Shape::Shape(double d)
{
	area_ = d;
}

Shape::Shape(Shape& p)
{
	area_ = p.area_; 
}

Shape::~Shape() 
{
	cout << "distructor" << endl;
}

Rectangle::Rectangle()
{
	l = 1;
	w = 2;
}

Rectangle::Rectangle(double a, double b) 
{
	l = a;
	w = b;
}

Rectangle::Rectangle(Rectangle & p) 
{
	l = p.w;
	w = p.w; 
}
Rectangle::~Rectangle() {};

double Rectangle::getlength()
{ 
	return l; 
}

double Rectangle::getwidth() 
{
	return w;
}

double Rectangle::GetArea()
{
		return l * w;
}

Circle::Circle()
{
	r = 3;
}

Circle::Circle(double a) 
{
	r = a;
}

Circle::~Circle() {}

Circle::Circle(Circle& p) 
{
	r = p.r;
}

double Circle::GetArea() 
{
	return 3.14 * r * r;
}

Square::Square()
{
	l = 4;
}
	
Square::Square(double a) 
{
	l = a;
}

Square::Square(Square& p)
{
	l = p.l;
}
	
Square::~Square() {}

double Square::GetArea() 
{
	return l * l; 
}