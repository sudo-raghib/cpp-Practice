#include<iostream>
using namespace std;
class student
{
	private:
		int Roll_NO;
		int Marks_Sub1;
		int Marks_Sub2;
		int Marks_Sub3;
	public:
	student();
	student(int Roll);
	student(int roll, int M1,int M2,int M3);
	void setRoll_NO(int r);
	void setMarks(int x,int y,int z);
	int getRoll_NO();
	int getMarks();
	int Total_Marks();
    void grade();
    void display();
};

student::student()
{
	Roll_NO=0;
	Marks_Sub3=0;
	Marks_Sub2=0;
	Marks_Sub1=0;
}

student::student(int roll, int M1,int M2,int M3)
{
	setRoll_NO(roll);
	setMarks(M1, M2, M3);
}

void student::setRoll_NO(int r)
{
	Roll_NO=r;
}

void student::setMarks(int x,int y,int z)
{
	Marks_Sub1=x;
	Marks_Sub2=y;
	Marks_Sub3=z;
}

int student::getRoll_NO()
{
	return Roll_NO;
}

int student::getMarks()
{
	return Marks_Sub3,Marks_Sub2,Marks_Sub1;
}

int student::Total_Marks()
{
	return (Marks_Sub1+Marks_Sub2+Marks_Sub3);
}

void student::grade() {
	if((float) Total_Marks()/(100)>60)
		cout<<"A";
    else if((float) Total_Marks()/(100)>50&& (float) Total_Marks()/(100)<60)
    	cout<<"B";
    else
        cout<<"C";
}

void student::display() {
	cout<<"ROLL NO :"<<" "<<Roll_NO<<"MARKS :"<<" "<<Total_Marks()<<"GRADE :";
	grade();
	cout<<endl;
}

int main()
{

	student Naman;
	student Chaman(2, 10,11,12);

	Naman.display();
	Chaman.display();

	return 0;

}            



