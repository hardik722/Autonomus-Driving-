#include<iostream>
using namespace std;
bool my_even(int);
int main()
{
	int num;
	cout<<boolalpha;
	cout<<"enter num...\n";
	cin>>num;
	bool res=my_even(num);
	cout<<res<<"\n";
}
bool my_even(int n)
{
	if(n%2==0)
		return 1;
	else
		return 0;
}
