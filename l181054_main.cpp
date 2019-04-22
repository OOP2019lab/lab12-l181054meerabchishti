// lab12.cpp : Defines the entry point for the console application.
//

#include<conio.h>
#include"shape.h"
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"
shape *shapesArray[5];
int sumArea(shape*,shape*);
void printAreas();
void main()
{
	/*triangle t1(1.0,9.0, "Red");
	circle c1(2, "Blue");
	rectangle r1(6,2, "Orange");
	cout<<t1.area()<<endl;
	cout<<t1.color<<endl;
	cout<<c1.area()<<endl;
	cout<<r1.area()<<endl;

	shape *sptr1= &t1;
	shape &sref=r1;
	cout<< sptr1->area()<<endl;
	cout<< sptr1->color<<endl;
	cout<< sref.color<<endl;
	cout<< sref.area()<<endl;*/
	triangle t1(1.0,9.0, "Red");
	circle c1(2, "Blue");
	rectangle r1(6,2, "Orange");
	shape s1("Purple");
	cout<<sumArea(&t1,&c1)<<endl;
	cout<<sumArea(&s1,&r1)<<endl;
	cout<<sumArea(&s1,&t1)<<endl;

	int count= 5;

	float baseT;
	float heightT;
	string color;
	for(int i=0; i<count;)
	{
		cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
		switch (_getch())
		{
		case '1':
			cout<<"Enter base for triangle"<<endl;
			cin>>baseT;
			cout<<"Enter height for triangle"<<endl;
			cin>>heightT;
			cout<<"Enter color for triangle"<<endl;
			cin>>color;
			shapesArray[i]=new triangle(baseT,heightT,color);
			//get base from user as input
			//get height from user as input
			//get color from user as input
			// create new triangle object and add to shapesArray[i]
			i++;
			break;
		case '2':
			cout<<"Enter length for rectangle"<<endl;
			cin>>baseT;
			cout<<"Enter width for rectangle"<<endl;
			cin>>heightT;
			cout<<"Enter color for rectangle"<<endl;
			cin>>color;
			shapesArray[i]=new rectangle(baseT,heightT,color);
			//get length from user as input
			//get width from user as input
			//get color from user as input
			// create new rectangle object and add to shapesArray[i]
			i++;
			break;

		case '3':
			cout<<"Enter radius for circle"<<endl;
			cin>>baseT;
			cout<<"Enter color for circle"<<endl;
			cin>>color;
			shapesArray[i]=new circle(baseT,color);
			//get radius from user as input
			// create new circle object and add to shapesArray[i]
			i++;
			break;

		default:
			cout<<"Invalid input. Enter again." <<endl<<endl;
			break;
		}



	}
	printAreas();
	//shape *s1= new triangle(1.0,9.0, "Red");// constructor of triangle invoked
	//delete s1;//identify which destructor in invoked

}

int sumArea(shape* shape1,shape* shape2)
{
	int total;

	total= shape1->area()+shape2->area();
	return total;
}
void printAreas()
{
	for(int i = 0; i < 5; i++) {  
		cout << "object is " << shapesArray[i]->getname() << endl;  
		cout << "color is " << shapesArray[i]->getcolor() << endl;
		cout << "Area is " << shapesArray[i]->area() << endl;  

		cout << endl;    
	}  
}