#include<iostream>
using namespace std;
int main()
{
	int number,s=0;
	cout<<"Enter A number to CHeck";
	cin>>number;
	for(int i=1;i<number;i++)
		if(number%i==0)
		  s+=i;	
    if(s==number)
    	cout<<"Perfect Number";
    else
    	cout<<"Not a perfect Number";
    return 0;
}