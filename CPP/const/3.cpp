#include<iostream>
using namespace std;
class A
{
	int cash,gold;
	public:
	A()
	{
		cash=100,gold=200;
	}
	friend void get_data(class A);
	friend void get_data1(class A);
};
int main()
{
	class A f1;
	get_data(f1);

}
void get_data(class A obj1)
{
	cout<<"cash and gold.using get_data..\n";
	cout<<"cash-"<<obj1.cash<<" "<<"gold-"<<obj1.gold<<endl;
	class A f2;
	get_data1(f2);
}
void get_data1(class A obj2)
{
	cout<<"cash and gold using get_data1\n";
	cout<<"cash-"<<obj2.cash<<" "<<"gold-"<<obj2.gold<<endl;
}
