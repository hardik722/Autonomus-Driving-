#include<iostream>
using namespace std;
class A
{
	public:
		 void test(void)
		{
			cout<<"test A...\n";
		}
};
class B:public A
{
	public:
		virtual void test(void)
		{
			cout<<"test B...\n";
		}
};
int main()
{
	A *b1;
	B d1;
	b1=&d1;
	b1->test();
}
