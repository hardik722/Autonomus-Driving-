//deap copy..
#include<iostream>
#include<string.h>
using namespace std;
class A
{
	char *name;
	public:
	A(char *s,int l)
	{
		cout<<"perametric...f1..\n";
		this->name=new char[l+1];
		strcpy(this->name,s);
	}
	void get_data(void)
	{
		cout<<"string-"<<this->name<<endl;
	}
	A(class A &obj1,int l) 
	{
		this->name=new char[l+1];
		strcpy(this->name,obj1.name);
	}
	void modify(void)
	{
		this->name[0]='S';
	}
};
int main()
{
	char ch[10];
	cout<<"str-";
	cin>>ch;
	int l=strlen(ch);
	class A f1(ch,l),f2(f1,l);
	f1.get_data();
	f2.get_data();
	f1.modify();
	cout<<"after modyfing...\n";
	f1.get_data();
	f2.get_data();
}
