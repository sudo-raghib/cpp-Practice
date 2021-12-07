#include <iostream>
using namespace std;

int main() {
	int basic_salary;
	float per_allow,per_deduct,Net_salary;

	cout<<"Enter Basic Salary";
	cin>>basic_salary;
	cout<<"Enter percantage deductions";
	cin>>per_deduct;
	cout<<"Enter Percentage allowance";
	cin>>per_allow;

	Net_salary=basic_salary+(basic_salary*per_allow)/100-(basic_salary*per_deduct)/100;
	cout<<Net_salary;


	return 0;
}