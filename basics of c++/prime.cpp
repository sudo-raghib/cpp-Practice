#include<iostream>
using namespace std;
int main()
{
	int number,i,t=0;
	cout<<"Enter a number to check";
	cin>>number;
	
	if(number==2)
	    cout<<"Prime Number";
	else
	{   
		       for(i=2;i<number;i++)
	           {
		         if(number%i==0)
		
			        t=1;
		       }	
	

	           if(t==1)
		          cout<<"not prime Number";
	           else
		          cout<<"prime";
    }
	return 0;	



}