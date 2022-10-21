#include<iostream>
#pragma pack(1)
using namespace std;
class student
{
		int i;
		char ch;
		void fun1(void)
		{
			cout<<"hello\n";
		}
};

int main()
{
class student s1;
/*	s1.i=10;
	s1.ch='A';
	s1.fun1();*/
cout<<sizeof(s1)<<endl;
}
