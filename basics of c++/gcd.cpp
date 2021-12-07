#include<iostream>
using namespace std;
int main()
{
	int number1,number2,d=0;
	cout<<"Enter the number";
	cin>>number1>>number2;
	for(int i=1;i<=number1 && i<=number2;i++)
	{
		if(number1%i==0 && number2%i==0 && d<i)

			d=i;
			
	}
	cout<<"GCD IS :"<<d;	


}