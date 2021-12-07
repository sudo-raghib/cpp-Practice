#include<iostream>
using namespace std;
int main()
{
	int number,i,S=0;
	cout<<"Enter upto which :";
	cin>>number;
	for(i=1;i<=number;i++)
	{
		S+=i;
	}
	cout<<"SUM IS"<<S;
	return 0;	

}