#include<iostream>
using namespace std;
int main()
{
int *p,n,num;
cout<<"enter n..\n";
cin>>n;
int i,j;
p=new int[n];
cout<<"enter the ele...\n";
for(i=0;i<n;i++)
scanf("%d",&p[i]);

for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
			if(p[i]==p[j] && p[j]!=num)				
			{
			cout<<p[i]<<" ";
			num=p[i];
			break;
			}
		
	}
}
delete []p;
cout<<"\n";
}

