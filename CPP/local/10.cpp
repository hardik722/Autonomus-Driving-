#include<iostream>
using namespace std;
int i=10;
int main()
{
	int i=20;
	cout<<"i local- "<<i<<"\n";
	{
		int i=400;
		cout<<"i local- "<<i<<"\n";
		cout<<"i globle- "<<::i<<"\n";
	}
}
