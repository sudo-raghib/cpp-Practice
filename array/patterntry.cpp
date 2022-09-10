#include<iostream>
using namespace std;
int main()
{    
    int n;
    cout<<"Enter any number :";
    cin>>n;
	for(int i=0;i<2*n;i++)
	{
		for(int j=0;j<2*n-1;j++)
		{
			if(i<n && j<n && j+i>=n-1)
			{
				cout<<"*";
			}
			else if(i>n-1 && j<n && j+n>=i)
			{
				cout<<"*";

			}
			else if(i<n&& j>n-1&& j<=i+n-1 )
			{
				cout<<"*";
			}
			else if(i>n-1 && j>n-1&& j+i<=3*n-2)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}	

		}
		cout<<endl;	
	}
	return 0;
}