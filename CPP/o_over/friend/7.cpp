#include<iostream>
using namespace std;
class A
{
public:
int x;

friend void* operator new(unsigned long int ,int );

};
int main()
{
A *p=new A;
}
void* operator new(unsigned long int a)
{
cout<<sizeof(a)<<endl;
}
