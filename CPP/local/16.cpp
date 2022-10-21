#include<iostream>
using namespace std;
int main()
{
int x=10;

int &p=x;

int &rv=p;

int *q=&p;

int* &rp=q;

cout<<"*p= "<<*p<<"\n";

cout<<"*rv= "<<*rv<<"\n";

cout<<rv<<"\n";;

cout<<p<<"\n";

cout<<"x- "<<x<<"\n";

cout<<"p- "<<p<<"\n";

cout<<"rv- "<<rv<<"\n";

cout<<"*q- "<<*q<<" "<<"q- "<<q<<"\n";

cout<<"*rp- "<<*rp<<" "<<"rp- "<<rp<<"\n";

*rp=120;

cout<<"x- "<<x<<"\n";

cout<<"p- "<<p<<"\n";

}

