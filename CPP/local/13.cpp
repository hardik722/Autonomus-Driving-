#include<iostream>
using namespace std;
int a=100;
int main()
{
	int b=10,t;
	int &rv=::a;
	cout<<"before swaping..\n";
	cout<<a<<" "<<b<<"\n";
	t=rv;
	rv=b;
	b=t;
	cout<<"after swaping...\n";
	cout<<a<<" "<<b<<"\n";
}
