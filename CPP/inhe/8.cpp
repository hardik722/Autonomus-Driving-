#include<iostream>
using namespace std;
class based
{
	int x;
	public:
	based()
	{
		x=10;
		cout<<"constructor based...\n";
	}
	~based()
	{
		cout<<"destructor based...\n";
	}
	void get_based(void)
	{
		cout<<"x="<<x<<endl;
	}
};
class derived1;
class derived2:public derived1
{
	int z;
	public:
	derived2()
	{
		z=30;
		cout<<"constructor derived2...\n";
	}
	~derived2()
	{
		cout<<"destructor derived2...\n";
	}
	void get_derived2(void)
	{
	get_derived1();
	cout<<"z="<<z<<endl;

	}
};
class derived1:public based
{
	int m;
	public:
	derived1()
	{
		m=20;
		
		cout<<"constructor derived1...\n";
	}
	~derived1()
	{
		cout<<"destructor derived1...\n";
	}
	void get_derived1(void)
	{
	get_based();
		cout<<"m="<<m<<endl;
	}
};
int main()
{
derived1 d1;

	//derived2 d1;
	//d1.get_derived2();
}
