#include<iostream>
using namespace std;
class A
{
	int cash,gold;
	public:
	A(int a,int b)
	{
		cash=a;
		gold=b;
	}
	void get_data(void)
	{
		cout<<"cash-"<<cash<<"   gold-"<<gold<<endl;
	}
/*	A(A &obj1)
	{
		cout<<"copy construc...\n";
	}
	void test(class A obj1)
	{
		cout<<"obj1.cash-"<<obj1.cash<<"     obj1.gold-"<<obj1.gold<<endl;
	}*/
	void change(class A &obj1)
	{
	obj1.cash=10;
	}
};
int main()
{
	class A f1(100,200),f2(f1);
	//f1.test(f1);
	cout<<"f1 data...\n";
	f1.get_data();
	cout<<"f2 data...\n";
	f2.get_data();
	f1.change(f1);
	cout<<"after change...\n";
	f1.get_data();
	f2.get_data();
}
