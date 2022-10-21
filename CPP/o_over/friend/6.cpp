#include<iostream>
using namespace std;
class A
{
	int cash,gold;
	public:
	A(){ }
	A(int a,int b)
	{
		this->cash=a,this->gold=b;
	}
	void get_data(void)
	{
		cout<<"cash-"<<this->cash<<" "<<"gold-"<<this->gold<<endl;
	}
	friend A operator++(A &);
};
int main()
{
	A f1(10,20),f2;
	f1.get_data();
	f2=++f1;
	cout<<"-------f2-----\n";
	f2.get_data();
	cout<<"------f1-----\n";
	f1.get_data();
}
A operator++(A &obj1)
{
	A temp;
	temp.cash=++obj1.cash;
	temp.gold=++obj1.gold;
	return temp;
}
