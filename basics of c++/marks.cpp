#include <iostream>
using namespace std;
int main()
{
	int m1,m2,m3;
	float Avg;
	cout<<"Enter marks:";
	cin>>m1>>m2>>m3;
	Avg=(float)(m1+m2+m3)/3;
	if(m1>=0 && m2>=0 && m3>=0)
	{
	    if(Avg>=60)
	    {
		
		   cout<<"Grade is A"<<"Average is:"<<Avg;

       	}
	    else if(35<=Avg && Avg<=60)
	    {
		   cout<<"Grade is B"<<"Average is:"<<Avg;

	    }
	    else
	   {
		   cout<<"Grade is C"<<"Average is :"<<Avg;
	   }
	}
	else
	{
		cout<<"Invalid";
	}   

}