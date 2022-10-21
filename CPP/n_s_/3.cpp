#include<iostream>
using namespace std;
namespace ICICI
{
	int accno=20;
	void fun(void);
}
using namespace ICICI;
int main()
{
	cout<<accno<<"\n";
}
void ICICI::fun(void)
{
	cout<<"hello-ICICI...\n";
}

