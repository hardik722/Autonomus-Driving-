#include<iostream>
using namespace std;
class A
{
int cash,gold;
public:
void get_data(void)
{
cout<<"cash-"<<this->cash<<"   gold-"<<this->gold<<endl;
}
A()
{
cout<<"defualt..\n";
}
void modify(void)
{
this->cash=10;
this->gold=20;
}
};
int main()
{
class A f1,f2(f1);
f1.get_data();
f2.get_data();
f1.modify();
cout<<"after modifying...\n";
f1.get_data();
f2.get_data();
}

