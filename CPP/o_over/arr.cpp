#include<iostream>
using namespace std;
class A
{
	public:
		int a[3];
		A();
		A(int,int,int);
		void get_data(void);
		friend A operator+(A,A);
};

int main()
{
	//cout<<"enter  f1 array ele...\n";
	A f1(10,20,30);
	A f2(200,40,10);
	cout<<"f1 array ele..\n";
	f1.get_data();
	cout<<"f2 array ele...\n";
	f2.get_data();
	A f3;
	f3=f1+f2;
	cout<<"f3 array ele...\n";
	f3.get_data();
}

A operator+(A obj1,A obj2)
{
	A temp;
	int i;
	for(i=0;i<3;i++)
		temp.a[i]=(obj1.a[i])+(obj2.a[i]);

	return temp;
}

A::A(int x,int y,int z)
{
	a[0]=x;
	a[1]=y;
	a[2]=z;
}
A::A()
{
}

void A::get_data(void)
{
	int i;
	for(i=0;i<3;i++)
		cout<<this->a[i]<<" ";
	cout<<"\n";
}
