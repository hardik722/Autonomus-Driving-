#include<stdio.h>
	void bubble_short(int *,int);
void main()
{
	int a[5]={10,200,3,400,50},ele;
	ele=sizeof(a)/sizeof(a[0]);
	bubble_short(a,ele);
}
void bubble_short(int *ip,int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(ip[j]>ip[j+1])
			{
				t=ip[j];
				ip[j]=ip[j+1];
				ip[j+1]=t;
			}
		}
	}

for(i=0;i<n;i++)
printf("%d ",ip[i]);
printf("\n");



}
