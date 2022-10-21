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
void get_data(void);
};
int main()
{
class A f1,f2,f3;
f1.get_data();
f2.get_data();
f3.get_data();
}

void A::get_data(void)
{
cout<<"cash-"<<this->cash<<" "<<"gold-"<<this->gold<<endl;
}



