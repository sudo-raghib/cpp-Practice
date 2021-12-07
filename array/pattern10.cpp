#include<iostream>
using namespace std;
int main()
{
	int length,breadth;
	cout<<"Enter length  :"<<endl;
	cin>>length;
	cout<<"Enter breadth";
	cin>>breadth;
	for(int i=0;i<length;i++)
	{	for(int j=0;j<breadth;j++)
		{	if(i<length/2 && j<breadth/2)
			{
				if(j<=i)
					cout<<"*";
				else
					cout<<" ";
            }
            else if(i<length/2 && j>=breadth/2)
            {
            	if(j+i>=breadth-1)
            		cout<<"*";
            	else
            		cout<<" ";
            }
            else if(i>=length/2&& j>=breadth/2)
            {
            	if(j>=i)
            		cout<<"*";
            	else
            		cout<<" ";

            }
            else if(i>=length/2 && j<breadth/2)
            {
            	if(j+i<=breadth-1)
            		cout<<"*";
            	else
            		cout<<" ";

            }
        }
        cout<<endl;
    }        

}