#include<iostream>
using namespace std;
int& fun();
int main()
{
fun()=10;
fun();
}
int& fun()
{
static int k=100;
cout<<"k value- "<<k<<"\n";
cout<<(unsigned long int)&k<<"\n";
return k;
}
