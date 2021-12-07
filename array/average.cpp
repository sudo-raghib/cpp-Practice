#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	
    float Avg;
    cout<<"Enter len of Array";
    cin>>n;
    int A[n];
    for(int &x:A)
    {	
    	cout<<"Enter a number";
        cin>>x;
    }    
    for(int i=0;i<=n-1;i++)
    	sum+=A[i];
    Avg=(float)sum/n;
    cout<<"Avg is "<<" "<<Avg;
            
}