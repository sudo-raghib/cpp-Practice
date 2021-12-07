 #include<iostream>
using namespace std;
int main()

{   int length,breadth;
	cout<<"Enter Lenght :"<<" "<<"Enter breadth"<<" ";
	cin>>length>>breadth;

	for(int i=0;i<length;i++)
	{	for(int j=0;j<breadth;j++)
		{	if(i>=1 && i<=length-2)
			{    if(j>=1&& j<= breadth-2)
				   cout<<" ";
			    else
				   cout<<"*";
			}	
			else
			    cout<<"*";	
		}	

		cout<<endl;
	}	
}