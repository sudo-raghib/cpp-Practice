#include<iostream>
using namespace std;
int main()
{
	int lcm,number2,number1;
	cout<<"Enter two numbers :";
	cin>>number1>>number2;
	if(number1>=number2 && number1%number2==0)
		cout<<"LCM IS :"<<number1;
	else if(number2%number1==0)
		cout<<"LCM IS :"<<number2;
	else
	    cout<<"LCM IS :"<<number1*number2;	


}