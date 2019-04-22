#include"shape.h"
#pragma once

class circle:public shape
{
public:
	float area();
	circle(float,string);
	~circle() { cout << "~ circle () called."<<endl;  	}

private:
	float radius;

};