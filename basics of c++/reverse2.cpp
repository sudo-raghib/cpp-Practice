#include<iostream>
using namespace std;
int main()
{
	int number,c,e=0;
	cout<<"Enter a number";
	cin>>number;
	c=number;
	while(c>0)
	{
		e=e*10+(c%10);
		c=c/10;


	}
	cout<<e<<endl;

}   