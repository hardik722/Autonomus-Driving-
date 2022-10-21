///shadow copy...
#include<iostream>
#include<string.h>
using namespace std;
class A
{
	char *name;
	public:
	A(char *s)
	{
		int l=strlen(s);
		this->name=new char[l+1];
		strcpy(this->name,s);
	}
	void get_data(void)
	{
		cout<<"string-"<<this->name<<endl;
	}
	void modify(void)
	{
	this->name[0]='S';
	}
};

int main()
{
	char ch[10];
	cout<<"enter str-";
	cin>>ch;
	class A f1(ch),f2(f1);
	f1.get_data();
	f2.get_data();
	f1.modify();
	cout<<"after changing...\n";
	f1.get_data();
	f2.get_data();
	
}
