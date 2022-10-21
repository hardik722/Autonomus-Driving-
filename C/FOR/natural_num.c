#include<stdio.h>
void main()
{
int in,i,sum;
printf("enter the in = ");
scanf("%d",&in);
////////////////
//forword printing
/*	{
	for(i=1;i<=in;i++)
	printf(" %d",i);
	printf("\n");
	}       */          
/////////////////////
//reverse printing

/*	for(i=in;i>=1;i--)
	printf(" %d",i);
	printf("\n");*/
/////////////////////

	for(i=1,sum=0;i<=in;i++)
	{
	printf(" %d",i);
        if(i<=in)
	sum=sum+i;
	}
printf("\n");
printf("sum = %d\n",sum);

}	
