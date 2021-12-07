#include<iostream>
using namespace std;
int main()
{
	int number,i,s=1;
	cout<<"Enter the number :";
	cin>>number;
	for(i=1;i<=number;i++)
	{
		s*=i;
	}
	cout<<"Factorial is  :"<<s;
	return 0;	
}