#include<iostream>
using namespace std;
int main()
{
	int A[10],Key,n=10;
	for(int &x:A)
	{	cout<<"Enter The number"<<" ";
	    cin>>x;
	}   

    cout<<"Enter The key";
    cin>>Key;
    for(int i=0;i<11;i++)
    {
    	if(Key==A[i])
    	{   cout<<Key<<"key is "<<i;
    	    t=1;
    	    return 0;
    	}   
    }	    
    cout<<"No element in array";

}    