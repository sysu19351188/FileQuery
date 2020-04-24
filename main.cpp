#include<iostream>
#include"FileQuery.h"
#include"Shape.h"
#include "FileQuery.cpp"
#include "Shape.cpp"
#include<fstream>
#include<string>
using namespace std;

void TestTextQuery()
{
	cout << "test the textquery:" << endl;
	string filename = "TwoCities.txt";
	ifstream file1(filename);
	FileQuery a(file1);
	a.PrintSentencesOrdered();
	a.PrintSentencesFilted("the");
	a.PrintWordCount();
	a.ReplaceWord("the", "a");
	a.PrintSentencesOrdered();
}
void TestShape() 
{
	Rectangle a, b(5, 6);
	cout << "Rectangle_a's length is" << a.getlength()<<endl;
	cout << "Rectangle_b's length is" << b.getlength()<<endl;
	cout << "Rectangle_a's width is" << a.getwidth()<<endl;
	cout << "Rectangle_b's width is" << b.getwidth()<<endl;
	cout << "a's area is:" << a.GetArea()<<endl;
	cout << "b's area is:" << b.GetArea() << endl;
	Circle c, d(6);
	cout << "c's area is:" << c.GetArea() << endl;
	cout << "d's area is:" << d.GetArea() << endl;
	Square e, f(8);
	cout << "e's area is:" << e.GetArea() << endl;
	cout << "f's area is:" << f.GetArea() << endl;
}
int main()
{

	TestTextQuery();
	TestShape();
	return 0;
}