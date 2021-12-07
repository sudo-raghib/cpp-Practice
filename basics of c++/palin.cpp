#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int number,r=0,n,e,count=-1,d;
	cout<<"Enter a number to reverse";
	cin>>number;
	n=number;
	d=number;
	while(n>0)
	{
		n=n/10;
		count=count+1;
    }
    while(d>0 && count>=0)
    {
    	e=d%10;
    	d=d/10;
    	r=r+e*pow(10,count);
    	count=count-1;
    }
   
    if(r==number)
    	cout<<"Palindrome";
    else
    	cout<<"Not";
}    