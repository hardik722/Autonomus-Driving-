#include<iostream>
using namespace std;
class A
{
	int real,img;
	public:
	void set_data(int a,int b)
	{
		this->real=a;
		this->img=b;
	}
	void get_data(void)
	{
		cout<<this->real<<"  "<<this->img<<endl;
	}
	A& addition(A &obj1)
	{
		static A temp;
		temp.real=this->real+obj1.real;
		temp.img=this->img+obj1.img;
		return temp;
	}
};
int main()
{
	A f1,f2,f3;
	f1.set_data(10,20);
	f2.set_data(20,30);
	cout<<"f1 data...\n";
	f1.get_data();
	cout<<"f2 data...\n";
	f2.get_data();
	f3=f1.addition(f2);
	cout<<"f3 data...\n";
	f3.get_data();
}
