#include<stdio.h>
void main()
{
int n1,n2,c=0;
printf(" enter the num n1<n2\n");
printf(" enter the n1= ");
scanf(" %d",&n1);
printf(" enter the n2= ");
scanf(" %d",&n2);

while(n1<=n2)
{
	printf(" %d",n1);
	n1++;
	c++;
}

printf(" c=%d\n",c);

}
