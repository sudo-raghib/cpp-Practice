#include<iostream>
using namespace std;
int main()
{
	int length,breadth,t=0;
	for(int i=0;i<4;i++)
	{	for(int j=0;j<7;j++)
		{	if(j<=3 && j+i>=3)
                cout<<"*";  	
			else if(i>=1 && j>3 && j<=i+3)
				cout<<"*";
			else
				cout<<" ";
		}	
		cout<<endl;
			
	}		

}