#include<iostream>
using namespace std;
class A
{
int cash,gold;
public:
A()
{
cout<<this<<endl;
}
~A()
{
cout<<this<<endl;
}
};
int main()
{
class A f1,f2,f3,f4;
cout<<"&f1-"<<&f1<<endl;
cout<<"&f2-"<<&f2<<endl;
cout<<"&f3-"<<&f3<<endl;
cout<<"&f4-"<<&f4<<endl;
}
