#include<iostream>
using namespace std;
class A
{
	int cash,gold;
	public:
	A();  // defualt const..
	A(int,int); //parametric const..
	A(A&); //copy const..
	void get_data(void);

};

int main()
{
	class A f1,f2(100,200); // Ex:int i=100;
	class A f3(f2); // Ex:int i=j;
	f1.get_data();
	f2.get_data();
	f3.get_data();
	
}

A::A()
{
	cout<<"defualt con..\n";
	cash=10,gold=20;
}

A::A(int a,int b)
{
	cout<<"perametric con...\n";
	this->cash=a,this->gold=b;
}

void A::get_data(void)
{
	cout<<this->cash<<"  "<<this->gold<<endl;
}

