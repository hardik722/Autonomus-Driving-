#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num,i=0,sum,r,m;
	cout<<"enter num...\n";
	cin>>num;

	for(sum=0;num!=0;num=num/10)
	{
		r=num%10;
		m=pow(2,i);
		sum=sum+(m*r);
		i++;
	}

	cout<<"binary to decimal-"<<sum<<endl;
}
