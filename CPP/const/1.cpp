#include<iostream>
using namespace std;
class A
{
	int cash,gold;
	public:
	A()
	{
		cout<<"enter cash-";
		cin>>cash;
		cout<<"enter gold-";
		cin>>gold;
	}
	friend void get_data(class A);
};
int main()
{
	class A f1;
	get_data(f1);
}
void get_data(class A obj1)
{
	cout<<"cash and gold...\n";
	cout<<obj1.cash<<" "<<obj1.gold<<endl;
}

