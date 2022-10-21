#include<iostream>
#include<string.h>
using namespace std;
class A
{
	char *p;
	public:
	A(char *s)
	{
		int l=strlen(s);
		cout<<" hello constructor..\n";
		this->p=new char[l+1];
		strcpy(this->p,s);
	}
	void get_data(void)
	{
		cout<<"str-"<<this->p<<endl;
	}
	~A()
	{
		cout<<"hello destructor...\n";
		delete []this->p;
	}
};
int main()
{
	char ch[10];
	cout<<"enter string...\n";
	cin>>ch;
	class A f1(ch);
	f1.get_data();
}
