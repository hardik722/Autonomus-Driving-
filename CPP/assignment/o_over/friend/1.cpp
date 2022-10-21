#include<iostream>
using namespace std;
class A
{
	int real,img;
	public:
	A(){
	}
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

	friend class A operator+(class A obj1,class A obj2);
	friend class A operator-(class A obj1,class A obj2);
	friend class A operator*(class A obj1,class A obj2);
	friend class A operator/(class A obj1,class A obj2);
};

int main()
{
	class A f1(10,20),f2(2,3),f3(3,3),f4(f1),f5(5,2),f6;
	f1.get_data();
	f4.get_data();
	f6=f1+f2*f3-f4/f5;  //14+19j
	f6.get_data();
}

class A operator+(class A obj1,class A obj2)
{
	class A temp;
	temp.real=obj1.real+obj2.real;
	temp.img=obj1.img+obj2.img;
	return temp;
}
class A operator-(class A obj1,class A obj2)
{
	class A temp;
	temp.real=obj1.real-obj2.real;
	temp.img=obj1.img-obj2.img;
	return temp;
}
class A operator*(class A obj1,class A obj2)
{
	class A temp;
	temp.real=obj1.real*obj2.real;
	temp.img=obj1.img*obj2.img;
	return temp;
}
class A operator/(class A obj1,class A obj2)
{
	class A temp;
	temp.real=obj1.real/obj2.real;
	temp.img=obj1.img/obj2.img;
	return temp;
}


