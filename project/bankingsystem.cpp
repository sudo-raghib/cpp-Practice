#include<iostream>
#include<string>
using namespace std;
bool t=true;
class Bank
{  
public:
	string name,DOB,AccountType;
	int Balance,Pin;
	long long int AccountNo;
	char Gender;
public:	

	Bank(string name="Null",string DOB="Null",string AccountType="Null",char Gender='N',int Balance =0)
    {
    	this->name=name;
    	this->DOB=DOB;
    	this->AccountType=AccountType;
    	this->Gender=Gender;
    	this->Balance=Balance;

    }

	void choices(int x)
	{	
		switch(x)
		{
			
			default:cout<<"Invalid NUmber :\n";
				break;
			case 1:
			{ 	
				int tempPin,tempAmount;
				cout<<"Enter Pin :\n";
				cin>>tempPin;
				if(PinCheck(tempPin))
				{	
					cout<<"Enter Amount \n";
					cin>>tempAmount;
					Withdrawl(tempAmount);
				}	
				break;
			}

			case 2:
			{   
				int a;
				int tempPin;
				cout<<"Enter a Amount :\n";
				cin>>a;
				cout<<"Enter Pin :";
				cin>>tempPin;
				
				if(PinCheck(tempPin))
					cout<<"Your Updated Balance Is :\n"<<Depsit(a);
				break;
			}
			case 3:
			{   
				int tempPin;
				cout<<"Enter Pin :\n";
				cin>>tempPin;
				if(PinCheck(tempPin))
					cout<<BalanceCheck();
				break;
			}
			case 4:
			{
				string Username1;
				cout<<"Enter Senders Username :\n";
				cin>>Username1;
				int tempPin;
				int tempAmount;
				cout<<"Enter Pin :\n";
				cin>>tempPin;
				cout<<"Enter Amount\n";
				cin>>tempAmount;
				//Transfer(tempAmount,Username1);
				break;


			}
			case 5:
			{
				Display();
				break;
			}
			
			case 6:
			{
				PinGeneration();
				break;
			}
			case 7:
			{
				t=false;
				break;
			}
			case 8:{
			
			
			break;


			}

		

        }
    }
    
	int Depsit(int a)
	{
		Balance=Balance+a;
  		return Balance;
	}
	
	void Withdrawl(int a)
	{
		if(Balance >=a)
		{
			cout<<"Withdrawl Successful :\n";
			cout<<"Please Take Your Cash :\n";
			Balance-=a;
			
		}
		else
		{
			cout<<"Not Enough Balance Enter Valid Amount :\n";
			cout<<"Redirecting\n ";
			choices(1);
		}	
 	
	}
	int BalanceCheck() {
		return Balance;
    }

	bool PinCheck(int b)
	{
    	if(Pin ==b)
    	{
    		return true;
    	}
    	else
    	{	
    		int pin;
    		cout<<"wrong Pin enter again :\n";
    	    cin>>pin;
    	    PinCheck(pin);
    	} 
    }

    void Display()
    {
    	cout<<"NAME OF ACCOUNT HOLDER :\n"<<name;
    
    	cout<<"DOB OF ACCOUNT HOLDER : \n"<<DOB;
    	cout<<"ACCOUNT TYPE :\n"<<AccountType;
    	cout<<"ACCOUNT NO OF ACCOUNT HOLDER :\n"<<AccountNo;
    	cout<<"GENDER :\n"<<Gender;
    }
     int AccountNoGen()
    {
    	static long long int i=600070;
    	AccountNo=i;
    	i++;
    	return AccountNo; 

    }

    
    void PinGeneration()
    {
    
    	cout<<"ENTER 4 DIGIT PIN : \n";
    	cin>>Pin;
    	

    }
};

int main()

{
	

	cout<<"Welcome to the banking System : \n";
	cout<<"///////////////////////////////////////////////////ROYAL BANK OF MODIPUR//////////////////////////////////////////////////////////\n";
	cout<<"Are u registered with our Bank (true or false)\n";

	Bank User;
	
	
	string name1,DOB1,AccountType1;
			char Gender1;
		
			cout<<"Enter Name :\n";
			cin>>name1;
			cout<<"Enter DOB1 \n";
			cin>>DOB1;
			cout<<"Enter Account Type (CURRENT OR SAVINGS )\n";

			cin>>AccountType1;
			cout<<"Gender (M OR F) :\n";
			cin>>Gender1;
			
			
			
			
		    Bank User1(name1,DOB1,AccountType1,Gender1);
			User1.PinGeneration();
			cout<<"YOUR ACCOUNT NO IS :\n"<<User1.AccountNoGen();
			cout<<"THANKS FOR CHOOSING US : \n";



 	while(t)	
   {	

	    	
		
			int x;
			
			cout<<"Enter your choice : \n";
			cout<<" 1-Withdrawl\n" ;
			cout<<"2-Deposit \n";
			cout<<"3- Check Balance : \n";
			cout<<"4-Transfer Money : \n";
			cout<<"5- View Details : \n";
			cout<<"6-Regenerate Pin : \n";
			cout<<"7- Exit : \n";
			
			cin>>x;
			

	    	User1.choices(x);
	}

}    
    
              
	


			
		
				
	



 	

