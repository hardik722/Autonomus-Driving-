#include<iostream>
using namespace std;
class A
{
int cash,gold;
static int c;
public:
A()
{

cout<<"enter cash and gold..\n";
cin>>cash>>gold;
c++;
cout<<"constructor-"<<c<<"\n\n";
}
void get_data(void)
{
cout<<"total object-"<<c<<endl;
}
~A()
{
cout<<"destructor-"<<c<<endl;
c--;
cout<<this->cash<<" "<<this->gold<<"\n\n";
}
};
int A::c;
int main()
{
class A f1,f2,f3;
cout<<sizeof(f1)<<endl;
f1.get_data();
}
