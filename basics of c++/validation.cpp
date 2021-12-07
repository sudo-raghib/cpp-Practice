#include<iostream>
using namespace std;
int main()
{   

	float x,y,c;
	cout<<"Enter dividend number";
	cin>>x;
	cout<<"Enter divisor number";
	cin>>y;
	if(y==0)
	{
		cout<<"Invalid";
	}
	else
	{   c=x/y;
		cout<<c;
	} 
    return 0;


}