#include<stdio.h>
void main()
{
int i,n1,n2,c;
printf("enter in the form of n1<n2\n");
printf("enter the n1 and n2\n");
scanf(" %d%d",&n1,&n2);
if(n1<n2)
{
	for(i=n1,c=0;i<=n2;i++)
	{
	if(i%2==0)
	{
	printf(" %d",i);
	c++;
	}
	}
printf("\n");
printf("c=%d\n",c);		
}
else
printf("invelid input\n");

}
