#include"shape.h"
#pragma once
class triangle:public shape
{
public:
	float area();
	triangle(float,float,string);
	float getbase();
	~triangle(){ cout << "~ triangle () called."<<endl;   }

private:
	float base;
	float height;

};