#include<stdio.h>
void main()
{
	int a[10],i,ele,l,s;

	ele=sizeof(a)/sizeof(a[0]);

	printf("enter ele..\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	l=s=a[0];
	for(i=1;i<ele;i++)
	{
		if(a[i]>l)
			l=a[i];
		if(a[i]<s)
			s=a[i];
	}
	printf("large=%d small=%d\n",l,s);

} 
