#include<iostream>
using namespace std;
int main()
{
	int number,n,r,s=0;
	cout<<"Enter any number:";
	cin>>number;
	n=number;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		s+=r*r*r;
	}
	if(s==number)
	{
		cout<<"Armstrong";
	}
	else
	{
		cout<<"Not Armstrong";
	}	
}