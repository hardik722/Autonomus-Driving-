// sum of odd num and product of even num in array...
#include<iostream>
using namespace std;
int main()
{
	int n;

	printf("enter total ele..\n");
	cin>>n;

	int *p=new int[n],i;

	cout<<"scan ele..\n";
	for(i=0;i<n;i++)
		cin>>p[i];
	
	int sum=0,mul=1;
	for(i=0;i<n;i++)
	{
		if(p[i]%2!=0)
			sum=sum+p[i];
		else
			mul=mul*p[i];
	}
	
	cout<<"sum of odd num="<<sum<<endl;
	cout<<"product of even num="<<mul<<endl;
}

