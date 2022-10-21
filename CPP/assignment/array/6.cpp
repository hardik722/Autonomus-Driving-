// sum of two matrix (different scaning method..)
#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"enter row and column (both are must be same)\n";
	cout<<"enter row...\n";
	scanf("%d",&r);
	cout<<"enter col...\n";
	scanf("%d",&c);
	
	//********* dynamic mem. for array of pointer **********
	int **A=new int*[r];
	int **B=new int*[r];
	int **C=new int*[r];
	
	//********* memory for 2d array **********
	int i,j;
	for(i=0;i<r;i++)
	{
		A[i]=new int[c];
		B[i]=new int[c];
		C[i]=new int[c];
	}
	cout<<"scan the ele...\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter A[%d][%d]=",i,j);
			cin>>A[i][j];
			printf("enter B[%d][%d]=",i,j);
			cin>>B[i][j];
		}
	}
	cout<<"\n";
	
	cout<<"******** 1st 2-d arr\n";
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cout<<A[i][j]<<" ";
		printf("\n");
	}
	cout<<"\n";
	
	cout<<"******** 2nd 2-d arr\n";
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cout<<B[i][j]<<" ";
		printf("\n");
	}
	cout<<"\n";
	
	cout<<"******** sum A+B ******\n";
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			C[i][j]=A[i][j]+B[i][j];
	}
	/*********** printing result **********/
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cout<<C[i][j]<<" ";
		printf("\n");
	}
}


