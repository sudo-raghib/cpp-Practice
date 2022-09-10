#include<iostream>
using namespace std;
int main()
{
	string str;
	 int j=0;
	cout<<"Enter email address :";
	getline(cin,str);
	string str2="";
	str2.resize(str.length());
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			
			if(str[i]=='@')
			{ 	

				break;
			}
			else
			{	
				
				str2[j]=str[i];
				j++;
			}	
			
		}	
	}
	cout<<str2;	
}