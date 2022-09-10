#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string lines;
	int start =0,words;
	ofstream ofs("Mywords.txt");
	ofs<<"My Name is Raghib. I am from delhi \n am in IT Branch\tI study in MAIT. ";

	ifstream ifs("Mywords.txt");
	getline(ifs,lines);
	cout<<lines[0];
}	

	/*for(int i =0;lines[i]!='\0';i++)
	{
		if(lines[i]==" "&& lines[i]==" \n"&& lines[i]=="\n")
		{
			start=0;

		}
		else if( start==0);
		{
			start=1;
			words+=1;
		}
	}
	return 0;
	*/
			

