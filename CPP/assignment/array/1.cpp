// reverse array...
#include<iostream>
using namespace std;
int main()
{
	int *p,n,i,j,t;
	cout<<"enter array ele...\n";
	cin>>n;
	p=new int[n];
	cout<<"enter ele...\n";
	printf("****************\n");
	for(i=0;i<n;i++)
		cin>>p[i];
	printf("****************\n");
	for(i=0,j=n-1;i<j;i++,j--)
	{
		t=p[i];
		p[i]=p[j];
		p[j]=t;
	}
	cout<<"after reversing...\n";
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	cout<<"\n";
}


