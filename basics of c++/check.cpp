#include<iostream>
using namespace std;
int main()
{
	int n,r,s=0;
	cout<<"Enter number";
	cin>>n;
	while(n>0)
	{   
		r=n%10;
		n=n/10;
		s=s+r;
	}
	cout<<s;	
}