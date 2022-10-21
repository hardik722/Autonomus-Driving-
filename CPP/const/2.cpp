#include<iostream>
using namespace std;
class A
{
	int cash,gold;
	public:
	A()
	{
		cash=10,gold=20;
	}
	void get_data(void)
	{
		cout<<"cash and gold..\n";
		cout<<this->cash<<" "<<this->gold<<endl;
	}
};
int main()
{
	class A f1;
	f1.get_data();
}
