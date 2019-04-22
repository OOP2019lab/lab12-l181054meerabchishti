#include"shape.h"
#pragma once
class rectangle:public shape
{
public:
	float area();
	rectangle(float,float,string);
	~rectangle(){ cout << "~rectangle() called."<<endl;   }

private:
	float height;
	float width;
};