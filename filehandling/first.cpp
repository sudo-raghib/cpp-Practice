//Writing in a File 
int main()
{
 ofstream ofs("Test.txt",ios::trunc);
 ofs<<"John"<<endl;
 ofs<<25<<endl;
 of<<"CS"<<endl;
 
 of.close();
 
}
//Reading from File
int main()
{
 ifstream ifs("Test.txt");
 string name;
 int roll;
 string branch;
 
 ifs>>name>>roll>>branch;
 cout<<name<<endl<<roll<<endl<<branch<<endl;
 ifs.close();
 
}