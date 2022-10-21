#include<iostream>
using namespace std;
class A
{
	int cash,gold;
	public:
	/*A(int a,int b=0)
	  {
	  cout<<"defualt...\n";
	  cash=a;
	  gold=b;
	  }
		
	  A(int k)
	  {
	  cash=k;
	  }
	  A()
	  {
	  cout<<"defualt..\n";
	  }*/
	void get_data(void)
	{
		cout<<this->cash<<" "<<this->gold<<endl;
	}
};
int main()
{
	class A f1,f2(f1);
	f1.get_data();
	f2.get_data();
}
