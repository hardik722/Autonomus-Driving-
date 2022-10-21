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
	class A& addition(class A obj1)
	{
		static class A temp;
		temp.real=this->real+obj1.real;
		temp.img=this->img+obj1.img;
		return temp;
	}
};
int main()
{
	class A c1,c2,c3;
	c1.set_data(10,20);
	c2.set_data(20,40);
	c3=c1.addition(c2);
	c1.get_data();
	c2.get_data();
	cout<<"result...\n";
	c3.get_data();
} 
