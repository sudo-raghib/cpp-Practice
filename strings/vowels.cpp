#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int vowelCount=0;
	int consonantsCount=0;
	int words=1;
	cout<<"ENTER A STRING :";
	getline(cin,str);
	for(int i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a' && str[i]<='z')||(str[i]>='A'&& str[i]<='Z'))
		{	
			if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
			{
				vowelCount+=1;
			}
			else
			{
				consonantsCount+=1;
			}
		}	
		else if(str[i]==' ')
		{
			words+=1;
		}
		

	}
	cout<<"NO of Vowel "<<vowelCount<<endl;
	cout<<"No of consonants "<<consonantsCount<<endl;
	cout<<"No of words "<<words<<endl;
}