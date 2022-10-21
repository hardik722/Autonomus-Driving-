#include<iostream>
using namespace std;
class A
{
	int cash,gold;
	public:
	A()
	{
		cout<<"hello constructor...\n";
		cash=10,gold=20;
	}
	~A()
	{
		cout<<"cash-"<<this->cash<<"   gold-"<<this->gold<<endl;
		cout<<"hello destructor...\n";
	}
};
int main()
{
	class A f1;
	cout<<"f1 will destroy..\n";
}
