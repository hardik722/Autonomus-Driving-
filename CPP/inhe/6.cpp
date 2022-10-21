#include<iostream>
using namespace std;
class based
{
	int x;
	public:
	void set_based(void)
	{
		cout<<"enter x...\n";
		cin>>x;
	}
	void get_based(void)
	{
		cout<<x<<endl;
	}
};
class derived:protected based
{
	int m;
	public:
	void set_derived(void)
	{
		set_based();
		cout<<"enter m...\n";
		cin>>m;
	}
	void get_derived(void)
	{
		get_based();
		cout<<m<<endl;
	}
};
int main()
{
	based b1;
	b1.set_based();
	b1.get_based();
	derived d1;
	d1.set_derived();

	d1.get_derived();
}







