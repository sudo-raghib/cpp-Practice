#include<iostream>
using namespace std;
int main()
{
	int number,count=0,c,g;
	cout<<"Enter The number";
	cin>>number;
	c=number;
	g=number;
	while(c/10>0)
	{	c=c/10;

		count+=1;
	}	
	while(count>0)
	{
	    cout<<g%10<<endl;
	    g=g/10;
	    count-=1;
	}
	cout<<g;    


}