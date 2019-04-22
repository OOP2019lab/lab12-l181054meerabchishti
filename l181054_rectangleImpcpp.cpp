#include"rectangle.h"
rectangle::rectangle(float height, float width,string colour):shape("rectangle",colour)
{
	this->height=height;
	this->width=width;
}
float rectangle::area()
{
	cout<<"rectangle area invoked"<<endl;
	float area;
	area=this->height*this->width;
	return area;
}