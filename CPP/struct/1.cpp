#include<iostream>
using namespace std;

struct one
{
int i;
char ch;
float f;
};
int main()
{
struct one *p;
p=new struct one;
p->i=10;
p->ch='a';
p->f=12.2;
cout<<p->i<<" "<<p->ch<<" "<<p->f<<endl;
}
