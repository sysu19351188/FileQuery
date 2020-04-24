#pragma once
#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
using namespace std;

class Shape 
{
	double area_;
public:
	Shape();
	Shape(double d){};
	Shape(Shape& p);
	~Shape();
};

class Rectangle:public Shape 
{
	double l, w;
public:
	Rectangle();
	Rectangle(double a, double b);
	Rectangle(Rectangle& p);
	~Rectangle();
	double getlength();
	double getwidth();
	double GetArea();
};

class Circle :public Shape {
	double r;
public:
	Circle();
	Circle(double a);
	~Circle();
	Circle(Circle& p);
	double GetArea();
};

class Square :public Rectangle {
	double l;
public:
	Square();
	Square(double a);
	Square(Square& p);
	~Square();
	double GetArea();
};

#endif
