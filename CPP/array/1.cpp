#include<iostream>
using namespace std;
int main()
{
int *p;
p=(int*)malloc(sizeof(int));
cout<<"enter data...\n";
cin>>*p;
cout<<"*p- "<<*p<<endl;
}
