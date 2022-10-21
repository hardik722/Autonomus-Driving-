#include<iostream>
#pragma pack(1)
using namespace std;
class A
{
	int x;
	public:
	A()
	{
		x=10;
		cout<<"constructor A..\n";
	}
	~A()
	{
		cout<<"destructor A...\n";
	}
void get_A(void)
{
cout<<"x="<<x<<endl;
}
};
class B:virtual public A
//class B: public A
{
	public:
		int y;
		B()
		{
			y=20;
			cout<<"constructor B...\n";
		}
		~B()
		{
			cout<<"destructor B...\n";
		}
		void get_B(void)
		{
			get_A();
		}
};
class C:virtual public A
//class C: public A
{
	public:
		int m;
		C()
		{
			m=30;
			cout<<"constructor C...\n";
		}
		~C()
		{
			cout<<"destructor C...\n";
		}
};
class D:public B,C
{
	public:
		int n;
		D()
		{
			n=40;
			cout<<"constructor D...\n";
		}
		~D()
		{
			cout<<"destructor D...\n";
		}
		void get_D(void)
		{
//			get_B();
			A::get_A();
			//cout<<"x="<<B::x<<endl;
			//cout<<"x="<<C::x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"m="<<m<<endl;
			cout<<"n="<<n<<endl;
		}
};
int main()
{
	D d1;
	d1.get_D();
	cout<<sizeof(A)<<endl<<sizeof(B)<<endl<<sizeof(C)<<endl<<sizeof(D)<<endl;
}
