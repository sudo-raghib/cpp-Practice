#include<iostream>
#include<math.h>
using namespace std;
int decimalToBinary(int n)
{	
	int bin=0;
	while(n>0)
	{
		int remainder;
		static int  power=0;
		remainder =n%2;
		bin=bin+remainder*pow(10,power);
		power++;
		n=n/2;


	}
	return bin;	
}
int main()
{
	cout<<decimalToBinary(72);
}