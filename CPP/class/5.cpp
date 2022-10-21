#include<iostream>
using namespace std;
class A
{
int cash;
int gold;
public:
void set_data(int &a,int &b)
{
cout<<"enter a and b...\n";
cin>>a>>b;
cash=a;
gold=b;
get_data();
cout<<"&a-"<<&a<<" "<<"&b-"<<&b<<endl;
}
void get_data(void)
{
cout<<"cash and gold...\n";
cout<<"cash-"<<cash<<" "<<"gold-"<<gold<<endl;
}
};
int main()
{
class A s1;
int m,n;
printf("enter m and n...\n");
cin>>m>>n;
s1.set_data(m,n);
cout<<"m-"<<m<<" "<<"n-"<<n<<endl;
cout<<"&m-"<<&m<<" "<<"&n-"<<&n<<endl;
}

