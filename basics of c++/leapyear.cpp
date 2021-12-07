#include <iostream>
using namespace std;
int main()
{
	int Year;
	cout<<"Enter year to check";
	cin>>Year;
	if(Year%100==0)
	{
		if(Year%400==0)
			cout<<"Leap Year";
		else
			cout<<"Not A Leap year";
	}
	else
	{
		if(Year%4==0)
			cout<<"Leap year";
		else
			cout<<"Not a leap year";
	}
	return 0;

}	 

