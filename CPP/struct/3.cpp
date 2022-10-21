#include<iostream>
using namespace std;
struct one
{
private:
int a,b;
public:
	void fun1(void)
	{
	cout<<"enter a and b..."<<endl;
	cin>>a>>b;
	cout<<a<<" "<<b<<endl;
	}
};
int main()
{
	struct one s1;
	s1.fun1();
}
