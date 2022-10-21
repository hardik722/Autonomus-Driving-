#include<iostream>
using namespace std;
class A
{
	int cash;
	int gold;
	public:
	void set_data(int a,int b)
	{
		cash=a;
		gold=b;
	}
	void get_data(void)
	{
		cout<<"cash and gold...\n";
		cout<<cash<<" "<<gold<<endl;
	}
};
int main()
{
	class A s1;
	s1.set_data(100,200);
	s1.get_data();
	cout<<sizeof(s1)<<endl;
}

