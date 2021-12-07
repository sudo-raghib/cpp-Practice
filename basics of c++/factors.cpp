#include<iostream>
using namespace std;
int main()
{
	int number,i;
	cout<<"Enter any numbeer";
	cin>>number;
	for(i=1;i<=number;i++)
	{
		
		if(number%i==0)
		
           cout<<i<<endl;
	}
	return 0;
}