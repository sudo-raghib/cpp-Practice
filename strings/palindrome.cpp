#include<iostream>
#include<string>
using namespace std;
int main()
{   

	string str;
	cout<<"ENTER A STRING :";
	cin>>str;

	for(int i=0;i<(str.length()/2);i++ )
	{
		if(str[i] != str[str.length()-1-i])
		{
			cout<<"Not A Palindrome: "<<str;
			return 0;
		}
	}	
	cout<<"Palindrome";
}	
		

	