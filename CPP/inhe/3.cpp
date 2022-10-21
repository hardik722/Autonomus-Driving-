#include<iostream>
using namespace std;
class based
{
public:
	int x;
public:
	void set_based(void)
	{
		cout<<"enter x ...\n";
		cin>>this->x;
	}
	void get_based(void)
	{
		cout<<"x -"<<this->x<<endl;
	}
};
class derived : private based
{
protected:
	int a;
public:
	void set_derived(void)
	{
		cout<<"a of derived...\n";
		cin>>a;
		//cout<<"x of derived..\n";
		//cin>>x;
		set_based();
	}
	void get_derived(void)
	{
		cout<<"a-"<<this->a<<" "<<"x-"<<this->x<<endl;
	}
};

int main()
{
	class based b1;
	class derived d1;
//b1.x=100;
b1.get_based();
b1.set_based();
b1.get_based();
//d1.set_derived();
//d1.get_derived();
d1.set_derived();
d1.get_derived(); 
} 
