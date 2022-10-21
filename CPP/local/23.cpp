#include<iostream>
using namespace std;
int sum(int,int,int=0);
int main()
{
int n=sum(10,20,20,10);
cout<<"n-"<<n<<endl;
}
int sum(int a,int b,int c)
{
return a+b+c;
}
