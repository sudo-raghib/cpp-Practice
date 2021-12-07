#include <iostream>
using namespace std;
int main()
{
	int a,b,Total_amount;
	cout<<"enter total amounnt";
	cin>>Total_amount;
	if(Total_amount<100)
	{
		cout<<"No Discount";
	}
	else if(Total_amount>=100 && Total_amount<500)
	{   cout<<"Discount is:"<<(float)Total_amount*0.1;
    }
	else if(Total_amount>500)
	{
		cout<<"Discount is "<<(float)Total_amount*0.2;
    }
	return 0;
}