#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int number,r=0,n,e,count=-1;
	cout<<"Enter a number to reverse";
	cin>>number;
	n=number;
	while(n>0)
	{
		n=n/10;
		count=count+1;
    }
    while(number>0 && count>0)
    {
    	e=number%10;
    	number=number/10;
    	r=r+e*pow(10,count);
    	count=count-1;
    }
    e=number%10;	
    cout<<r+e;
}    