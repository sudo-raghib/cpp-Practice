#include<iostream>
using namespace std;
int main()
{
	int n,count_neg=0,count_pos=0;

	cout<<"Enter The Number of element in array :";
	cin>>n;
	int A[n];
	for(auto &x:A)
	{	
		cout<<"Enter the element";
	    cin>>x;
	}

	for(auto x:A)
	{
		if(x<0)
			count_neg+=1;
		else
			count_pos+=1;
	}	
	cout<<"No. of Negative Elements: "<<count_neg<<"\nNo. of Positive Elements: "<<count_pos;
}	