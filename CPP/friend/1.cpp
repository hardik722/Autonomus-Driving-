#include<iostream>
using namespace std;
class A
{
	int cash,gold;
	friend int main();
};
int main()
{
	class A f1;
	f1.cash=10;
	f1.gold=20;
	cout<<f1.cash<<" "<<f1.gold<<"\n";
}
