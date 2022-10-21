// smallest and largest element in array
#include<iostream>
using namespace std;
int main()
{
	int *p,i,n;
	cout<<"enter total ele...\n";
	cin>>n; // n=1,2,3....

	p=new int[n];
	
	cout<<"scan the ele...\n";
	for(i=0;i<n;i++)
		cin>>p[i];
	int small,large;
		
	if(n>0)
	{
		if(p[0]<p[1])
		{
			small=p[0];
			large=p[1];
		}
		else
		{
			small=p[1];
			large=p[0];
		}
	}
	
	if(n>1)
	{
		for(i=2;i<n;i++)
		{
			if(p[i]>large)
				large=p[i];
			if(p[i]<small)
				small=p[i];
		}
	}
	cout<<"large-"<<large<<endl;
	cout<<"small-"<<small<<endl;
}
