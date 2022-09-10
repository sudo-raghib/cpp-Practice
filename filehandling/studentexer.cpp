#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int  main()
{   
	ofstream ofs("STOCK.txt");
	Stock S1("IPHONE 13",10,150000);
	
	ofs<<S1;
	ofs.close();
	Stock S2();
	ifstream ifs("STOCK.txt");
	ifs>>S2;
	cout<<S2;
	ifs.close();
	return 0;

}
