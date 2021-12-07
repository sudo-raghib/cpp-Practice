#include<iostream>
using namespace std;
int main()
{
	int sum=0,A[]={10,20,30,40,50,60,70,80,90,100};
	for(auto x:A)
	{
		sum+=x;
	}
	cout<<"Sum is :"<<" "<<sum;	
}