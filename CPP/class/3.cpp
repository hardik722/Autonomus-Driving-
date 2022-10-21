#include<iostream>
using namespace std;
class student
{
	int rollno;
	string s;
	public:
	void set_data(void)
	{
		cout<<"enter rollno and name\n";
		cin>>rollno;
		getline(cin,s);
	}
	void get_data(void)
	{
		cout<<"rollno-"<<rollno<<"\n";
		cout<<"name-"<<s<<"\n";
	}
}s1;
int main()
{
s1.set_data();
s1.get_data();
}




















































































