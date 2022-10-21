#include<iostream>
using namespace std;
class based1
{
	int x;
	public:
	based1()
	{
		x=10;
		cout<<"constructor based1...\n";
	}
	~based1()
	{
		cout<<"destructor based1...\n";
	}
	void get_based1(void)
	{
		cout<<"x="<<x<<endl;
	}
};
class based2
{
	int m;
	public:
	based2()
	{
		m=20;
		cout<<"constructor based2...\n";
	}
	~based2()
	{
		cout<<"destructor based2...\n";
	}
	void get_based2(void)
	{
		cout<<"m="<<m<<endl;
	}
};

class derived: public based1,based2
{
	int z;
	public:
	derived()
	{
		z=30;
		cout<<"constructor derived...\n";
	}
	~derived()
	{
		cout<<"destructor derived..\n";
	}
	void get_derived(void)
	{
		get_based1();
		get_based2();
		cout<<"z="<<z<<endl;

	}
};

int main()
{
	derived d1;
	cout<<"d1-"<<sizeof(d1)<<endl;
	d1.get_derived();
}

