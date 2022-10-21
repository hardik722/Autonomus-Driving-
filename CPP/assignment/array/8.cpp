// matrix multiplication ( different scanning method )
#include<iostream>
using namespace std;
int main()
{
	int r,c;
	printf("enter row and col..(but row and col. both are same..\n");
	cout<<"enter row..\n";
	cin>>r;
	cout<<"enter col..\n";
	cin>>c;
	
	/********** dynamic mem. for array of pointer..***********/
	
	int **A=new int*[r];
	int **B=new int*[r];
	int **C=new int*[r];

	/*********** dynamic mem for 2d arr ***********/

if(r==c)
{	
	int i,j,k,sum;
	for(i=0;i<r;i++)
	{
		A[i]=new int[c];
		B[i]=new int[c];
		C[i]=new int[c];
	}
	
	/*********** scaning element ***********/

	printf("scan A ele..\n");
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

	/*********** printing element ************/

	printf("\nA ele are...\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",A[i][j]);
		cout<<"\n";
	}
	
	printf("\nB ele are...\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",B[i][j]);
		cout<<"\n";
	}
	
	/********** logic for multiplication ***********/
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		for(k=0,sum=0;k<c;k++)	
		sum=sum+A[i][k]*B[k][j];
		C[i][j]=sum;
		}
	}

	/********** printing result **********/
	
	cout<<"\nmultiplication of A and B\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d  ",C[i][j]);
		printf("\n");
	}
}
}
