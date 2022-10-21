#include<iostream>
using namespace std;
struct student
{
	private:
		int i;
		char ch;
	public:
		void fun1(void)
		{
			cout<<"hello\n";
		}
};
int main()
{
	struct student s1;
	s1.i=10;
	s1.fun1;
}
