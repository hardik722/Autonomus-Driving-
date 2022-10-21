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
using namespace ICICI;
int main()
{
using SBI::accno;
		cout<<accno<<endl;
		welcome_note();
		
		cout<<accno<<endl; // normal method is 1st priority
		welcome_note();
	
}

