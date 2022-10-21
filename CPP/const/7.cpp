#include<iostream>
using namespace std;
class A
{
	int cash,gold;
	public:
	A(int a,int b)
	{
		cout<<"copy constr..\n";
		cash=a,gold=b;
	}
	void test(A temp)
	{
	cout<<temp.cash" "<<temp.gold<<endl;
	}
	void get_data(void);
void set_data(A obj)
{

}
};
int main()
{
	class A f1(100,200);
	set_data(f1);
}


