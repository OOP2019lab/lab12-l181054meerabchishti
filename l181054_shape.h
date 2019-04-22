#include<iostream>
#include<string>
using namespace std;
#pragma once
class shape
{ 
protected:
	string type;
public:
	virtual float area();
	string color;
	shape(string,string);
	shape(string);
	string getname();
	string getcolor();
	virtual ~shape();
	

};