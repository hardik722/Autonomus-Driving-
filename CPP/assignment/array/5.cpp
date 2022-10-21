// sum of two matrix...
#include<iostream>
using namespace std;
int main()
{
	int **A;
	A=new int*[3];
	int **B;
	B=new int*[3];
	int **C;
	C=new int*[3];
	int i,j;
	/* allocating memory for 2d array...*/
	
	for(i=0;i<3;i++)
	{
		A[i]=new int[3];
		B[i]=new int[3];
		C[i]=new int[3];
	}
	cout<<"scan the 1st 2d arr.\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cin>>A[i][j];
	}
	cout<<"\n";
	cout<<"scan the 2nd 2d arr..\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cin>>B[i][j];
	}
	cout<<"******** 1st 2-d arr\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cout<<A[i][j]<<" ";
		cout<<"\n";
	}
	cout<<"\n";
	cout<<"******** 2nd 2-d arr\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cout<<B[i][j]<<" ";
		cout<<"\n";
	}
	cout<<"\n";
	cout<<"******** sum A+B ******\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			C[i][j]=A[i][j]+B[i][j];
	}
	cout<<"\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cout<<C[i][j]<<" ";
		cout<<"\n";
	}
}


