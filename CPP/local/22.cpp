#include<iostream>
using namespace std;
void arr(int*,int);
int main()
{
	int n;
	cout<<"enter ele- ";
	cin>>n;
	int a[n],i;
    cout<<"scan ele...\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	arr(a,n);
	cout<<"reverse ele are...\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	printf("\n");
}
void arr(int *p,int n)
{
	int* &rv=p;
	int t,i,j;
	for( i=0, j=n-1;i<j;i++,j--)
	{
		t=rv[i];
		rv[i]=rv[j];
		rv[j]=t;
	}
}
