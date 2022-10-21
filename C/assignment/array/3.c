//3.

#include<stdio.h>
int prime_num(int*,int,int*);
void main()
{
	int a[5],a1[5],ele,c,i;

	ele=sizeof(a)/sizeof(a[0]);

	printf("enter ele..\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	c=prime_num(a,ele,a1);
	printf("c=%d\n",c);

}
int prime_num(int *p1,int n,int *p2)
{
	int i,j,c=0,k=0;
	for(i=0;i<n;i++)
	{
		for(j=2;j<p1[i];j++)
		{
			if(p1[i]%j==0)
				break;
		}
		if(p1[i]==j)
		{
			c++;
			p2[k]=p1[i];
			k++;
		}
	}
	for(i=0;i<c;i++)
	printf("%d ",p2[i]);

	return c;
}














