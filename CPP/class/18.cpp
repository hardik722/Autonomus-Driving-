#include<iostream>
using namespace std;
class A 
{
	int cash;
	static int x;
	public:
	static void set_data(void)
	{
		cout<<"enter static member...\n";
		cin>>x;
	}
	int get_data(void)
	{
		cout<<"x-"<<x<<endl;
		return x;
	}
};
int A::x;
int main()
{
	class A f1;
	A::set_data();
	int y=f1.get_data();
	cout<<" in main fun-"<<y<<endl;
}
