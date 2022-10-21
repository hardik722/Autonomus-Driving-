#include<iostream>
namespace SBI
{
	int accno=1234,a,b;
	void fun(void);
	int sum(int,int);
}
int main()
{
	int s;
	std::cin>>SBI::a>>SBI::b;
	std::cout<<"SBI- "<<SBI::accno<<std::endl;
	SBI::fun();
	s=SBI::sum(SBI::a,SBI::b);
	std::cout<<"sum- "<<s<<std::endl;
}
void SBI::fun(void)
{
	std::cout<<"hello-SBI...\n";
}
int SBI::sum(int m,int n)
{
	return m+n;
}
