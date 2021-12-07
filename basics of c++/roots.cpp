#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,root2;
	cout<<"enter a";
	cin>>a;
	cout<<"enter b";
	cin>>b;
	cout<<"enter c";
	cin>>c;
	if(b*b-4*a*c <0)
    { 
    	cout<<"Roots does notexists real ";
	}
    else
    {	if(b*b-4*a*c==0)
    	{
    		cout<<"reatl roots equal";
        }
        else
        {
        	cout<<"real roots";

        }    
    }

    return 0;



}