#include<iostream>
using namespace std;
class A
{
int cash,gold;
static int x;
public:
void set_data(void)
{
this->cash=10,this->gold=20,x=10;
}
void get_data(void)
{
cout<<this->cash<<" "<<this->gold<<" "<<this->x<<endl;
}
};
int A::x;
int main()
{
class A f1;
f1.set_data();
f1.get_data();
}
