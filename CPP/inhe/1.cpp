#include<iostream>
using namespace std;
class based
{
	int x;
	public:
	void set_based(void)
	{
		cout<<"enter x of based...\n";
		cin>>this->x;
	}
	void get_based(void)
	{
		cout<<"x of based-"<<this->x<<endl;
	}
};
class derived : public based
{
	int a;
	public:
	void set_derived(void)
	{
		cout<<"a of derived...\n";
		cin>>a;
	}
	void get_derived(void)
	{
		cout<<"a of derived-"<<this->a<<endl;
	}
};
int main()
{
	//	cout<<"based-"<<sizeof(based)<<endl;
	//	cout<<"derived-"<<sizeof(derived)<<endl;
	class based b1;
	class derived d1;
//	b1.set_based();
//	b1.get_based();
	d1.set_based();
//d1.get_based();	
b1.set_derived();

} 
