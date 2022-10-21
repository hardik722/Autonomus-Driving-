#include<iostream>
using namespace std;
class A
{
	int cash,gold;
	void get_data();
	friend int main();
	friend void print(class A&);
};
int main()
{
	class A f1,f2;
	cout<<"enter f1 cash and gold...\n";
	cin>>f1.cash>>f1.gold;
	cout<<"enter f2 cash and gold...\n";
	cin>>f2.cash>>f2.gold;
	print(f1);
	
	f1.get_data();
	f2.get_data();
}
void print(class A &obj1)
{
	cout<<"using print fun...\n";
	cout<<obj1.cash<<" "<<obj1.gold<<"\n";
}
void A::get_data()
{
cout<<"using get_data...\n";
	cout<<this->cash<<" "<<this->gold<<"\n";
}
