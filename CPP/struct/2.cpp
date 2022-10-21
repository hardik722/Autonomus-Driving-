#include<iostream>
using namespace std;
struct one
{
int i;
char ch;
void fun1(void)
{
cout<<"hello student"<<endl;
}
};

int main()
{
struct one s1;
cout<<"sizeof s1-"<<sizeof(s1)<<endl;
s1.fun1();
}


