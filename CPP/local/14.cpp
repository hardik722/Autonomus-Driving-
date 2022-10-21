#include<iostream>
using namespace std;
void swap_data(int& ,int&);
int main()
{
	int a=10,b=20;
	cout<<"before swap..\n";
	cout<<a<<" "<<b<<"\n";
	swap_data(a,b);
	cout<<"after swap..\n";
	cout<<a<<" "<<b<<"\n";
}
void swap_data(int &p,int&q)
{
	int t;
	t=p;
	p=q;
	q=t;
}

