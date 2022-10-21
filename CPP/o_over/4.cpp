#include<iostream>
using namespace std;
class A
{
	int real,img;
static int c;
public:
	A(){}
	A(int a,int b)
	{
	c++;
		this->real=a;
		this->img=b;
	cout<<"constructor-"<<c<<endl;
	}
	void get_data(void)
	{
		if(this->img<0)
			cout<<this->real<<this->img<<"j"<<endl;
		else
			cout<<this->real<<"+"<<this->img<<"j"<<endl;

	}
class A operator +(class A obj1)
{
class A temp;
temp.real=this->real+obj1.real;
temp.img=this->img+obj1.img;
return temp;
}
class A operator -(class A obj1)
{
class A temp;
temp.real=this->real-obj1.real;
temp.img=this->img-obj1.img;
return temp;
}
};
int A::c;
int main()
{
class A f1(50,100),f2(20,10),f3(2,3),f4;
f4=f1+f2-f3;
f4.get_data();
}
