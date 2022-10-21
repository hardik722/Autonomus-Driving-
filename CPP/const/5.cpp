#include<iostream>
using namespace std;
class A
{
int cash,gold;
public:
A()
{
cash=100,gold=200;
}
void get_data(void)
{
cout<<"cash-"<<this->cash<<" "<<"gold-"<<this->gold<<endl;
}
};
int main()
{
A f1;
f1.get_data();
}

