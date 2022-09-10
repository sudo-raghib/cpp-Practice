#include<iostream>
using namespace std;
char hexa(int n)
{	
	
	if (n>9)
	{	
		char temp;
		for(int num=10;num<=n;num++)

		 	 temp=65+num-10;
		return temp;

    }
    else
    	return n;

}
string decimalToHex(int n)
{
	string Hexa;
	int remainder;
	while(n>0)
	{
		n=hexa(n);
		remainder=n%16;
		static int index=Hexa.length()-1;
		Hexa[index]=remainder;
		n=n/16;
		index=index-1;



	}
	return Hexa;	
}

int main()
{
	cout<<decimalToHex(228);
}