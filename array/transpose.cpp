#include<iostream>
using namespace std;
int main()
{
	int row,columns;
	cout<<"Enter No. of rows"<<"Enter no of columns";
	cin>>row>>columns;
	int A[row][columns],B[columns][row];
	for(int i=0;i<row;i++)
	{	for(int j=0;j<columns;j++)
		{	cout<<"Enter the element";
		    cin>>A[i][j];
		}    
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<columns;j++)
		{
			B[j][i]=A[i][j];
		}	

	}
	cout<<"TRANSPOSED :";
	cout<<endl;
	for(int i=0;i<columns;i++)
	{
		for(int j=0;j<row;j++)
		{
			cout<<B[i][j]<<" ";

		}
		cout<<endl;	
	}
	cout<<"Original :";
	cout<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<columns;j++)
		{
			cout<<A[i][j]<<" ";

		}	
		cout<<endl;
	}	   


}