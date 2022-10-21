#include<iostream>
using namespace std;
class A
{
	int cash,gold;
	public:
	static int x;
	void set_data(void)
	{
		this->cash=10; this->gold=20;
	}
	void get_data(void)
	{
		cout<<this->cash<<" "<<this->gold<<" ";
	}
};
int A::x=200;
int main()
{
	class A f1;
	f1.set_data();
	f1.get_data();
	cout<<A::x<<endl;
}

