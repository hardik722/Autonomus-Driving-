#include<iostream>
namespace  my_space
{
	int a;
	float f;
	int fun1();
	struct st
	{
		int i;
		char ch;
	}ST;
}
using namespace my_space;
int main()
{
	a=10;
	std::cout<<"a- "<<a<<"\n";
	ST.i=100;
	std::cout<<"ST.i- "<<ST.i<<"\n";
	std::cout<<"a- "<<fun1()<<"\n";
}
int fun1(void)
{
a=100;
return a;
}
