#include<iostream>
using namespace std;
class based
{
int x,y;
public:
based()
{
cout<<"constructor basd..\n";
x=10,y=20;
}
~based()
{
cout<<"destructor based...\n";
}
};
class derived:private based
{
int m,n;
public:
derived()
{
cout<<"constructor derived...\n";
m=100,n=200;
}
~derived()
{
cout<<"destructor derived...\n";
}
};
int main()
{
derived d1;
}
