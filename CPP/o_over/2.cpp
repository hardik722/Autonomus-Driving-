#include<iostream>
using namespace std;
class A
{
	int real,img;
public:
	A(int a,int b)
	{
		this->real=a;
		this->img=b;
	}
	void get_data(void)
	{
		if(this->img<0)
			cout<<this->real<<this->img<<"j"<<endl;
		else
			cout<<this->real<<"+"<<this->img<<"j"<<endl;
	}
	A()
	{

	}
	class A operator+(class A temp)
{
temp.real=this->real+temp.real;
temp.img=this->img+temp.img;
return temp;
}
};
int main()
{
	class A f1(10,20),f2(100,200),f3;
	f1.get_data();
	f2.get_data();
	f3=f1+f2;
f3.get_data();
}
