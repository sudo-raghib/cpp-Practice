#include<iostream>
#include<string>
using namespace std;
struct Electricity
{
	
		int subcriber_id;
		string subcriber_name;
		float electric_consump;
		string code;
		float AMOUNT;

		Electricity(int subcriber_id=0,string subcriber_name="null",float electric_consump=0 )
		{
			this->subcriber_id=subcriber_id;
			this->subcriber_name=subcriber_name;
			this->electric_consump=electric_consump;
		}
		void setsubcriber_id(int subcriber_id)
		{
			this->subcriber_id=subcriber_id;

		}
		void setsubcriber_name(string subcriber_name)
		{
			this->subcriber_name=subcriber_name;
		}
		void setelectric_consump(float electric_consump)
		{
			this->electric_consump=electric_consump;
		}
		int  getid()
		{
            return subcriber_id;
		}
		string getname()
		{
			return subcriber_name;
		}
		float getconsump()
		{
			return electric_consump;
		}
		void Display()
		{
			cout<<"Subcriber Name :"<<subcriber_name;
			cout<<"Subcriber ID :"<<subcriber_id;
			cout<<"Electric Consumption :"<<electric_consump;
			cout<<"TYPE :"<<code;
			cout<<"NET PAYABLE AMOUNT :"<<AMOUNT;
		} 

		
};
struct Residential: Electricity
{
    Residential(int subcriber_id=0,string subcriber_name="null",float electric_consump=0,string code="0"):Electricity(subcriber_id,subcriber_name,electric_consump)
	{   
		this->code=code;
	    AMOUNT=100+ 0.5f*electric_consump;
	} 	
};
struct Commercial: Electricity
{   
	Commercial(int subcriber_id=0,string subcriber_name="null",float electric_consump=0,string code="0"):Electricity(subcriber_id,subcriber_name,electric_consump)
	{   
		this->code=code;
		if(electric_consump<1000)
	    {
		  AMOUNT=100*electric_consump;

	    }
	    else
	   {
		AMOUNT=100*(1000)+ 0.45f*(electric_consump-1000);

	   }
	} 	
};

struct inductrial:Electricity
{
	inductrial(int subcriber_id=0,string subcriber_name="null",float electric_consump=0,string code="0"):Electricity(subcriber_id,subcriber_name,electric_consump)
	{   
		this->code=code;
		if(electric_consump<1000)
	    {
		  AMOUNT=180*electric_consump;

	    }
	    else
	   {
		AMOUNT=180*(1000)+ 0.75f*(electric_consump-1000);
    }
};
int main()
{
	string name;
	int id,consump;
	string code_1;
	cout<<"ENTER NAME,Subcriberid,electric_consump,code :";
	cin>>name>>id>>consump>>code_1;
	if(code!="I"|| "R"|| "C")
	{
		cout<<"SAHI DAAL";
	}
	else if(code=="I")
	{
		inductrial bill1(id,name,consump,code_1);
		bill1.Display();
	}
	else if(code=="R")
	{
		Residential bill1(id,name,consump,code_1);
		bill1.Display();
	}	
	else if(code=="C")
	{
		Commercial bill1(id,name,consump,code_1);
		bill1.Display();
	}
	return 0;

}
