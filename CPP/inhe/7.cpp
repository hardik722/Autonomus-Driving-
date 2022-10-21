#include<iostream>
using namespace std;
class based 
{
	public:
		int x;
		based()
		{
			x=10;
			cout<<"constructor based x="<<x<<endl;
		}
};
class derived:public based
{
	public:
		int x;
		derived()
		{
			x=100;
			cout<<"constructor="<<x<<endl;
		}
};
int main()
{
	derived d1;
}



