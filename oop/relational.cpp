#include<iostream>
using namespace std;
class relational
{
	public:
		int p;
		int q;
	public:
	relational(int nume=1,int denom=1)
	{
	 	nume=p;
	 	denom=q;
	}
	int lcm(relational c1,relational c2)
	{
		int greatest,smallest;
	    if(c1.q!=c2.q)
	    {
            if(c1.q<c2.q)
            {
        	
               greatest =c2.q;
			   smallest=c1.q;
			   for(int i=1;i<50000;i++)
			   {
				   for(int j=1;j<50000;j++)
				   {
					   if(greatest*i==smallest*j)
					   {

						 c2.q=greatest*i;
						 c1.q=greatest*j;
						 c1.p*=j;
						 c2.p*=i;
						 return 0;
						} 
					}	
				}

			}	
	    }	

	}
	friend relational operator+(relational r1,relational r2);
	friend ostream &operator<<(ostream &o,relational&r3);
};

relational operator+(relational r1,relational r2)
{
   relational temp;
   temp.p=r1.p+r2.p;
   temp.q=r1.q+r2.q;
   return temp;


}
ostream&operator<<(ostream&o,relational&r3)
{
	o<<r3.p<<"/"<<r3.q;
	return o;
}

int main()
{   
	relational r1(10,6);
	relational r2(5,8);
	relational r3();
	r3=r2+r1;
	cout<<r3<<endl;
	return 0;
}
