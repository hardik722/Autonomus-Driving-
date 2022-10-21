#include<iostream>
using namespace std;
class A
{
	int a[3];
	public:
	friend void get_data(A);
	void operator()(int,int,int);
	friend A operator-(A);
};
int main()
{
	A f1,f2;
	f1(10,20,30);
	get_data(f1);
	cout<<"**********\n";
	f2=-f1;
	get_data(f2);
}
A operator-(A obj1)
{
A temp;
int i;
for(i=0;i<3;i++)
temp.a[i]=-obj1.a[i];
return temp;

}

void get_data(A obj1)
{
	int i;
	for(i=0;i<3;i++)
		cout<<obj1.a[i]<<" ";
	cout<<"\n";

}
void A::operator()(int x,int y,int z)
{
	this->a[0]=x;
	this->a[1]=y;
	this->a[2]=z;
}
