#include<iostream>
using namespace std;
int sum(int,int*,int);
int main()
{
	int n;
	cout<<"enter n ele...\n";
	cin>>n;
	cout<<"enter n ele...\n";
	int a[n],s,i;
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"enter sum...\n";
	cin>>s;
	sum(n,a,s);

}
int sum(int n,int *p,int sum)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i]+p[j]==sum)
			{
				cout<<p[i]<<" "<<p[j]<<"\n";
				return 1;
			}
		}
	}
}
