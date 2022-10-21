#include<iostream>
using namespace std;
void fun(int* &,int* &);
int main()
{
int a=10,b=20;
int *p=&a,*q=&b;
cout<<"before calling fun...\n";
printf("a=%d b=%d\n",a,b);
fun(p,q);
cout<<"after calling fun...\n";
printf("a=%d b=%d\n",a,b);
}
void fun(int* &m,int* &n)
{
int t;
t=*m;
*m=*n;
*n=t;
}
