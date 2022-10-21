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
	A(){ }
	void get_data(void)
	{
		if(this->img<0)
			cout<<this->real<<this->img<<"j"<<endl;
		else
			cout<<this->real<<"+"<<this->img<<"j"<<endl;
	}
	class A operator+ (class A obj1)
	{
		class A temp;
		temp.real=this->real+obj1.real;
		temp.img=this->img+obj1.img;
		return temp;
	}
};
int main()
{
	class A f1(10,20),f2(5,10),f3;
	f3=f1+f2;
	f3.get_data();
}

