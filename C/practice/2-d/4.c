#include<stdio.h>
void main()
{
	int a[4]={2,-7,3,8};
	int i,l,sl;
	if(a[0]>a[1])
	{
		l=a[0];
		sl=a[1];
	}
	else
	{
		l=a[1];
		sl=a[0];
	}
	for(i=2;i<4;i++)
	{
		if(a[i]>l && a[i]>sl)
		{
			sl=l;
			l=a[i];
		}
		else if(a[i]<l && a[i]>sl)
			sl=a[i];
	}
	printf("l=%d sl=%d\n",l,sl);
}
