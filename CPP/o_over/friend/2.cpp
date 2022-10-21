#include<iostream>
using namespace std;
class A
{
	int real,img;
public:
	A(){ }
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
friend class A operator-(class A,class A);
};
int main()
{
class A f1(10,20),f2(5,5),f3;
f3=f1-f2;
f3.get_data();
}
class A operator-(class A obj1,class A obj2)
{
class A temp;
temp.real=obj1.real-obj2.real;
temp.img=obj1.img-obj2.img;
return temp;
}
