#include<iostream>
using namespace std;
int main()
{
int a[3]={10,20,30};
int (&rv)[3]=a;
for(int i=0;i<3;i++)
cout<<"rv["<<i<<"]="<<rv[i]<<"\n";
cout<<"*(rv+1)- "<<*(rv+1)<<"\n";
}
