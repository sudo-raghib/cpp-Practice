#include<iostream>
using namespace std;
int power(int m, int n)
{
    int c=1;
	for(int i=0;i<m;i++)
		c*=n;
	return c;
}
int main()
{
	int pow,a,b;
	cout<<"Enter Number :"<<" ";
	cin>>a;
	cout<<" Enter power :"<<" ";
	cin>>b;
	pow=power(b,a);
	cout<<pow<<endl;
	return 0;

}