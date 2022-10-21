#include<iostream>
using namespace std;
int main()
{
	string s="vector";
	int l=s.length();
	cout<<"length- "<<l<<endl;
	for(int i=0;i<l;i++)
		s[i]=s[i]&~(1<<5);
	
	cout<<s<<endl;
}
