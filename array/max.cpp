#include<iostream>
using namespace std;
int main()
{
	int number,A[]={-8,-10,-100,-50,-80};
	number=A[0];
	for(int x:A)
	{
		if(number<x)
		{
            number=x;
		}	
	}
	cout<<"Max is"<<" "<<number;	
}