#include<iostream>
using namespace std;
class A
{
	int x;
};
class B:public A
{
	int y;
};
int main()
{
	A b1;
	B *d1;
	//b1=&d1;
	d1=&b1;
}
