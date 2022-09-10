#include<iostream>
#include<string>
using namespace std;
class Employee
{
   private:
   	string Employee_Name;
   	int id;
   	string type;
   	int salary;
   public:
   	Employee(Employee&Copy)
   	{
   		setname(Copy.Employee_Name);
   		setid(Copy.id);
   		settype(Copy.type);
   		setsalary(Copy.salary);
   	}

   	Employee()
   	{
   		Employee_Name="Null";
   	    id=0;
   	    type="Null";
   	    salary=0;
    }
   	void setname(string a)
   	{
   		Employee_Name=a;

   	}
   	void setid(int b)
   	{
   		id=b;

   	}
   	void settype(string c)
   	{
   		type=c;

   	}
   	void setsalary(int set)
    {
    	salary=set;
    }
    int getsalary()
    {
    	return salary;
    }	
   	string getname()
   	{
   		return Employee_Name;
   	}
   	int getid()
   	{
   		return id;
   	}
   	string gettype()
   	{
   		return type;
   	}
   	void Display()

   	{
   		cout<<"Employee_Name :"<<" "<<Employee_Name<<endl;
   		cout<<"Employee ID :"<<" "<<id<<endl;
   		cout<<"Employee Type : "<<" "<<type<<endl;
   		cout<<"SALARY :"<<" "<<salary<<endl;
   	}

};
class Full_time_Employee:public Employee
{
    
    public:
    	Full_time_Employee(string name="Null",int id_e=0,string type_e=0,int sal=0)
    	{   
   		    setname(name);
   		    setid(id_e);
   		    settype(type_e);
   		    setsalary(sal);
    	}
    	    	

};
class Part_time_Employee:public Employee
{
    private:
    	int days;
    	int wages;
    public:
    	Part_time_Employee(string name="Null",int id_e=0,string type_e=0,int days=0,int wages=740)
    	{
    		this->days=days;
    		this->wages=wages;
    		setsalary(days*wages);
    		setname(name);
   		    setid(id_e);
   		    settype(type_e);
    	}
        
};
int main()
{   int type_m,days_m,wage_m,sal_per,id_m; 
	string name_m;
	string typeOfEmployee;
	cout<<"Enter Name of employee :"<<" ";
	cin>>name_m;
	cout<<"Enter Type of employee :"<<" ";
	cin>>typeOfEmployee;
	if(typeOfEmployee=="Part")
	{
		cout<<"No of days :"<<"Wages :"<<"Employee id :";
		cin>>days_m>>wage_m>>id_m;
		Part_time_Employee employee1(name_m,id_m,"Part",days_m,wage_m);
		employee1.Display();
	}
	else
	{
		cout<<"Employee id :"<<"SAlary :";
		cin>>id_m>>sal_per;
		Full_time_Employee employee1(name_m,id_m,typeOfEmployee,sal_per);
		employee1.Display();
	    Full_time_Employee employee2(employee1);
	    employee2.Display();
	}

	return 0;	

}