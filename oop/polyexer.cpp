#include<iostream>
#include<string>
using namespace std;
class shape
{
 protected:
 	string shape1;
 protected:	
 	int area;
 	int Perimeter;

public:
 virtual void Display()=0;
 
	

};
class rectangle:public shape
{ protected:
    int length;
    int breadth;
 public:
 rectangle(string shape1,int length=0,int breadth=0)
 {
 	this ->length=length;
 	this->breadth=breadth;
 	this->shape1=shape1;
 	
 }
 int area_()
 {  area=length*breadth;
	return area;
 }
 int Perimeter_()
 {
 	Perimeter=2*(length+breadth);
 	return Perimeter;
 }
  void Display()
 {

 	cout<<"AREA OF GIVEN SHAPE IS :"<<area_();
 	cout<<"Shape is :"<<shape1;
 	cout <<"Perimeter :"<<Perimeter_();
 }





};
class circle:public shape
{ protected:
	int radius;
	int circumference;

 public:
 circle(string shape1="Null",int radius1=0)
 {
	radius=radius1;
	this->shape1=shape1;

 }
int area2()
{
	area=float((22/7)*radius*radius);
	return area;
}
int circumference2()
{
	circumference=float((2*22/7)*radius);
	return circumference;

}
void Display()
 {
 	cout<<"AREA OF GIVEN SHAPE IS :"<<area2()<<endl;
 	cout<<"Shape is :"<<shape1<<endl;
 	cout <<"circumference :"<<circumference2()<<endl;
 }
};
int main()
{   shape*p=new circle("circle",7);

	
	p->Display();
	p=new rectangle("rectangle");
	p->Display();
	
	return 0;
}