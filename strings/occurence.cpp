#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str="thethe";
	cout<<"Enter the string ";
	string str1;
	cin>>str1;
	
	int count=0;

	for(int i=0;str[i]!='\0';i++)
	{	

			if(str.find(str1)!=string::npos)
			{
				
				
				str.replace(i,str.find(str1)+str1.length(),"");
	
				
				i=i-1;
				count+=1;

			}
			else
			{
				break;
			}	
			
	}

	cout<<count;	
}

//TODO: do with two pointer approach

//str[i]=='t'&& str[i+1]=='h'&& str[i+2]=='e'|| str[i]=='T'&& str[i+1]=='H' && str[i+2]=='E'