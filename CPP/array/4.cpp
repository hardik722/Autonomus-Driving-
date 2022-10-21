#include<iostream>
using namespace std;
int main()
{
int *p;
p=new int[3]{100,200,300};
/*cout<<"enter ele...\n";
for(int i=0;i<3;i++)
cin>>p[i];
printf("ele are...\n");*/
for(int i=0;i<3;i++)
printf("%d ",p[i]);
cout<<"\n";
int* &ra=p;
for(int i=0;i<3;i++)
cout<<ra[i]<<" ";
cout<<endl;
} 
