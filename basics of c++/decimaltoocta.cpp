#include<iostream>
#include<math.h>
using namespace std;
int decimalToOcta(int n)
{	
	int octa=0;
	while(n>0)
	{
		int remainder;
		static int  power=0;
		remainder =n%8;
		octa=octa+remainder*pow(10,power);
		power++;
		n=n/8;


	}
	return octa;	
}
int main()
{
	cout<<decimalToOcta(72);
}