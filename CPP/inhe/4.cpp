#include<iostream>
using namespace std;
class base
{

};
class derived:public base
{
	int m;
	char ch;
};

int main()
{
	base b1;
	derived d1;
	cout<<sizeof(b1)<<" "<<sizeof(d1)<<endl;
}
