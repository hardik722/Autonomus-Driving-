#include<iostream>
using namespace std;
int main()
{
signed int x;
cout<<"enter x..\n";
cin>>x;
cout<<"x value- "<<x<<endl;
cout<<"31st bit - "<<(x>>31&1)<<endl;
}
