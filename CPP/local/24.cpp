#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int **p=new int*[3];
	for(i=0;i<3;i++)
		p[i]=new int[3]{10,20,30};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cout<<p[i][i]<<" ";
		cout<<"\n";
	}
	/*for(i=0;i<3;i++)
	  cout<<p[i]<<" ";*/
}
