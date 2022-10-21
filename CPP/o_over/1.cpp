#include<iostream>
using namespace std;
class A
{
	int real,img;
	public:
	void set_data(void)
	{
		cout<<"enter real and img..\n";
		cin>>this->real>>this->img;
	}
	void get_data(void)
	{
		if(this->img<0)
			cout<<this->real<<this->img<<"j"<<endl;
		else
			cout<<this->real<<"+"<<this->img<<"j"<<endl;
	}
	class A operator&(class A obj1)
	{
		class A temp;
		temp.real=this->real|obj1.real;
		temp.img=this->img|obj1.img;
		return temp;
	}
};
int main()
{
	class A f1,f2,f3;

	f1.set_data();
	f2.set_data();
   cout<<"***************\n";
	f1.get_data();
	f2.get_data();
	f3=f1&f2;
	f3.get_data();

}
