#include<iostream>
using namespace std;
class A
{
int real;
int img;
public:
void set_data(int a,int b)
{
real=a;
img=b;
}
void get_data(void)
{
if(img<0)
cout<<real<<img<<"j\n";
else
cout<<real<<"+"<<img<<"j\n";
}
void addition1(A &obj1,A &obj2)
{
real=obj1.real+obj2.real;
img=obj1.img+obj2.img;
}
};
int main()
{
class A c1,c2,c3;
int i,j;
cout<<"enter real and img.. for c1..\n";
cin>>i>>j;
c1.set_data(i,j);
cout<<"enter real and img.. for c2..\n";
cin>>i>>j;
c2.set_data(i,j);
c3.addition1(c1,c2); 
c1.get_data();
c2.get_data();
cout<<"result.using call by referance...\n";
c3.get_data();
}
