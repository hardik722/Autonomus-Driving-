#include<iostream>
using namespace std;
int main()
{
	int x=100,y=30,*p=&x;
	
	int* &rp=p;
	
	cout<<"*p= "<<*p<<" "<<"*rp= "<<*rp<<"\n";
	
	cout<<"x= "<<x<<" "<<"y= "<<y<<"\n";
	
	cout<<"***************\n";
	
	rp=&y;
	
	cout<<"*p= "<<*p<<" "<<"*rp= "<<*rp<<"\n";
	
	cout<<"x= "<<x<<" "<<"y= "<<y<<"\n";
	
	cout<<"***************\n";
	
	*rp=200;
	
	cout<<"x- "<<x<<" "<<"y- "<<y<<"\n";
}


