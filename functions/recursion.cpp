#include<iostream>
using namespace std;
Factorial(int n)
{
	static int Fact=1;
	if(n>0)
	{
		Fact*=n;
		Factorial(n-1);
		return Fact;
	}
	else
		return 0;
}
int main()
{   int s,d;
	cout<<"Enter the number :";
	cin>>s;
	d=Factorial(s);
	cout<<"Factorial of the given no is :"<<" "<<d;
    return 0;
}