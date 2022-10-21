
#include<iostream>
using namespace std;
class A
{
	int x;
	public:
	A(){ }
	A(int a)
	{
		this->x=a;
	}
	void get_data(void)
	{
		cout<<"x-"<<this->x<<endl;
	}
	friend A operator++(A&,int);
};
int main()
{
	class A f1(10),f2;
	f1.get_data();
	f2=f1++;
	f2.get_data();
	f1.get_data();
}
 A operator++(A &obj1,int )
{
	A temp;
	temp.x = obj1.x++;
	return temp;
}
