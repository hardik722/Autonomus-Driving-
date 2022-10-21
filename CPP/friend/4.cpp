#include<iostream>
using namespace std;
class B;
class A
{
	int cash_A,gold_A;
	public:	
	void set_data();

	friend void income_tax(class A,class B);
	friend void get_data(class A,class B);
};

class B
{
	int cash_B,gold_B;
	public:
	void set_data();

	friend void income_tax(class A,class B);
	friend void get_data(class A,class B);
};

int main()
{
	class A a1;
	class B b1;
	a1.set_data();
	b1.set_data();
	get_data(a1,b1);
	get_data(b1);
	income_tax(a1,b1);
}
void A::set_data()
{
	cout<<"enter A-cash and gold...\n";
	cin>>this->cash_A>>this->gold_A;
}
void B::set_data()
{
	cout<<"enter B-cash and gold...\n";
	cin>>this->cash_B>>this->gold_B;
}
void get_data(class A a1,class B b1)
{
	cout<<"A cash and gold...\n";
	cout<<"cash-"<<a1.cash_A<<" "<<"gold-"<<a1.gold_A<<endl;
	cout<<"B cash and gold...\n";
	cout<<"cash-"<<b1.cash_B<<" "<<"gold-"<<b1.gold_B<<endl;
}
void income_tax(class A obj1,class B obj2)
{
	int temp;
	temp=obj1.cash_A+obj2.cash_B;
	cout<<"temp-"<<temp<<"\n";
	cout<<"the limit 100..\n";
	if(temp>100)
		cout<<"pay tax...\n";
	else
		cout<<"no need to pay tax...\n";
}






