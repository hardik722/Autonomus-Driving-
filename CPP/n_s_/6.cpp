#include<iostream>
using namespace std;
namespace SBI
{
	int accno=1000;
	void welcome_note(void)
	{
		cout<<"welcome - SBI\n";
	}
}
namespace ICICI
{
	int accno=2000;
	void welcome_note(void)
	{
		cout<<"welcome - ICICI...\n";
	}
}
using namespace SBI;
int main()
{
	{
		using namespace SBI;
		cout<<accno<<endl;
		welcome_note();
	}
	
		using namespace ICICI;
		cout<<accno<<endl;
		welcome_note();
	
}

