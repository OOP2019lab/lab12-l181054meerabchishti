#include"shape.h"
shape::shape(string type, string colour)
{
	this->type=type;
	this->color=colour;
}
shape::shape(string color)
{
	this->color=color;
}
float shape::area()
{
	cout<<"shape area invoked"<<endl;
	return 0.0;
}
string shape::getname()
{
	return this->type;
}
string shape::getcolor()
{
	return this->color;
}
shape::~shape()
{ 
		cout << "~shape() called."<<endl; 
}