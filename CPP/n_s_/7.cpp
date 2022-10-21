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
using ICICI::accno;
int main()
{
using SBI::welcome_note;	
		cout<<accno<<endl;
		welcome_note();
		
		cout<<accno<<endl;
		welcome_note();
	
}

