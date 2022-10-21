// sort array in assending order ...
#include<iostream>
using namespace std;
int main()
{
	int n;
	printf("enter total ele...\n");
	cin>>n;

	int *p=new int[n];
	int i,j,t;
	cout<<"scan ele..\n";
	for(i=0;i<n;i++)
		cin>>p[i];

	cout<<"*******before soarting*******\n";
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	cout<<"\n";

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i]>p[j])
			{
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}
	
	cout<<"*******after sorting*********\n";
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	cout<<"\n";
}
