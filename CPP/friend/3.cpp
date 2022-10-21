#include<iostream>
using namespace std;
class A
{
int cash,gold;
void set_data();
public:
void get_data();
};
int main()
{
class A f1;
f1.get_data();
}
void A::set_data()
{
cout<<"scan data...\n";
cin>>cash>>gold;
}
void A::get_data()
{
set_data();
cout<<"printing data...\n";
cout<<this->cash<<" "<<this->gold<<endl;
}
