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
int main()
{
using namespace ICICI;    // directive method is 3rd priority
using SBI::accno;            //declarative method is 2nd priority
		cout<<accno<<endl;
		welcome_note();
		
		cout<<ICICI::accno<<endl; // normal method is 1st priority
		welcome_note();
	
}

