#include<iostream>
using namespace std;
int main()
{   int sum=0,length,breadth;
	cout<<"ENter Length :"<<endl<<"Enter breadth :"<<endl;
	cin>>length>>breadth;
	for (int i=0;i<length;i++)
	{	for(int j=0;j<breadth;j++)
		{   if(j<=i)
			{   sum+=1;
			    cout<<sum<<" ";
			}  
		}
		cout<<endl;
	}	

}