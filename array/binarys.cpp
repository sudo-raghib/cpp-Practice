#include<iostream>
using namespace std;
int main()
{
	int index,A[10]={2,5,7,11,13,16,17,19,20,21},Key,l,h,mid;
	cout<<"The key";
	cin>>Key;
	l=0;
	h=9;
	mid = (l+h)/2;
	while(A[mid]!=Key)
	{
		// 
		if(A[mid]<Key)
		{	l=mid+1;
		}
		// s   
		else if(A[mid]>Key)
		{    h=mid-1;
		} 

		mid = (l+h)/2;  
		index = mid;
	}
    cout<<"Key is at"<<index<<" index";
}    
