#include<iostream>
using namespace std;
int main()
{
	int A[3][3]={2,3,1,0,4,5,9,0,5};
	int B[3][3]={0,1,4,5,9,6,9,0,6};
	int C[3][3];
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			C[i][i]+=B[i][j]*A[j][i];
}