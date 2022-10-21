#include<iostream>
using namespace std;
class A
{
	int cash,gold;
	static int x;
	public:
	void set_data(void)
	{
		this->cash=10,this->gold=20;
	}
	static void set_data(int a)
	{
	x=a;
	}
	void get_data(void)
	{
		cout<<this->cash<<" "<<this->gold<<" "<<x<<endl;
	}
};
int A::x;
int main()
{
	class A f1;
	f1.set_data();
	A::set_data(100);
	f1.get_data();
}
