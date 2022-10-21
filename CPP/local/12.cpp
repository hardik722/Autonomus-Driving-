#include<iostream>
using namespace std;
int a=100;
int rv=200;
int main()
{
cout<<showbase;
cout<<uppercase;
cout<<showpos;
int a=10,b=20;
int &rv=::a;
cout<<"rv- "<<dec<<rv<<"\n";
/*cout<<"a- "<<dec<<a<<"\n";
cout<<"rv- "<<rv<<"\n";*/
rv=b;
/*cout<<"rv- "<<dec<<rv<<"\n";
cout<<"a- "<<dec<<a<<"\n";*/
cout<<"b- "<<b<<"\n";
cout<<"a- "<<::a<<"\n";
}
