#include"triangle.h"

triangle::triangle(float base, float height, string colour):shape("triangle",colour)
{
	this->height=height;
	this->base=base;
}
float triangle::area()
{
	cout<<"triangle area invoked"<<endl;
	float area;
	area=(0.5*this->base)*(this->height);
	return area;
}
float triangle::getbase()
{
	return this->base;
}