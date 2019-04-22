#include"circle.h"
circle::circle(float radiuss,string color):shape("circle",color)
{
	this->radius=radiuss;
}
float circle::area()
{
	cout<<"circle area invoked"<<endl;
	float area;
	area=3.142*(this->radius*this->radius);
	return area;
}