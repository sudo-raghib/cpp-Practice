#include<iostream>
#include<math.h>
using namespace std;
int binarytoDecimal(int num)
{
	int sum=0;
	while(num>0)
	{
		static int  power=0;
		int remainder;
		remainder=num%10;
		sum=sum+remainder*pow(2,power);
		power++;
		num=num/10;
	}
	return sum;	
}
int main()
{	
	cout<<binarytoDecimal(1100001);
}