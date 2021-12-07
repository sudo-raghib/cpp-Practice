#include<iostream>
using namespace std;
 int maxof3(int a,int b,int c)
{   
	if(a>b)
	{
		if(a>=c)
			return a;
		else
			return c;

	}
	else
	{
		if(b>=c)
			return b;
		else
			return c;
	}	
}
 int  main()
{
	int max,x,y,z;
	cout<<"Enter 3 numbers";
	cin>>x>>y>>z;
	max=maxof3(x,y,z);
	cout<<"MAX IS :"<<" "<<max;
	return 0;


}