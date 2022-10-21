#include<iostream>
using namespace std;
int main()
{
int *p,n,i,j;
cout<<"enter n..\n";
cin>>n;
p=new int[n];
cout<<"enter n elements of array...\n";
for(i=0;i<n;i++)
cin>>p[i];

int num;
cout<<"enter num...\n";
cin>>num;

for(i=0;i<n;i++)
{
if(p[i]==num)
{
for(j=i;j<n;j++)
p[j]=p[j+1];
}
n--;
}

for(i=0;i<n;i++)
cout<<p[i]<<" ";
cout<<"\n";
}
