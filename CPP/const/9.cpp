#include<iostream>
using namespace std;
class A
{
	int cash,gold;
	public:
	void get_data(void)
	{
		cout<<"cash-"<<cash<<"gold-"<<gold<<endl;
	}
	A()
	{
		cout<<"defult const..\n";
		cash=200,gold=400;
	}
	A(A &c)
	{
		cout<<"copy const..\n";
		cash=c.cash,gold=c.gold;
	}
};
int main()
{
	class A f1,f2(f1);

	f1.get_data();
	f2.get_data();

}
