#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter upto which";
	cin>>num;
	do
	{
		cout<<num ;
		num=num-1;
	}while(num>1);

    return 0;
}