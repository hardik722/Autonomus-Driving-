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
	void addition1(A obj1,A obj2)
	{
		real=obj1.real+obj2.real;
		img=obj1.img+obj2.img;
	}
};
int main()
{
	class A c1,c2,c3;
	c1.set_data(10,20);
	c2.set_data(20,-50);
	c1.get_data();
	c2.get_data();
	c3.addition1(c1,c2);
	cout<<"result..\n";
	c3.get_data();
}
