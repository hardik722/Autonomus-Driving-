#include<iostream>
using namespace std;
class A
{
	int cash,gold;
	public:
	~A()
	{
		cout<<"destructor...\n";
		cout<<"object destroied...\n";
	}
	A()
	{
	cout<<"defualt const...\n";	
	cash=10,gold=20;
	get_data();
	}
	A(A &obj1)
	{
	cout<<"copy const..\n";
	cash=obj1.cash;
	gold=obj1.gold;
	get_data();
	}
	void get_data(void)
	{
		cout<<"cash-"<<this->cash<<"   gold-"<<this->gold<<endl;
	}
};
void fun1(void)
{
	class A obj1;
	cout<<"obj..\n";
}
int main()
{
	class A f1,f2(f1),f3,f4(f2);
	//f1.get_data();
	//f2.get_data();
	fun1();
}
