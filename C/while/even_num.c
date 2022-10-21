#include<stdio.h>
void main()
{
int n1,n2,c=0;
printf(" enter the num n1<n2\n");
printf(" n1= ");
scanf(" %d",&n1);
printf(" n2= ");
scanf(" %d",&n2);
//if(n1<=n2)
while(n1<=n2)
{
	if(n1%2==0)
	{
	printf(" %d ",n1);
        c++;
	}
	n1++;
}

printf(" c=%d\n",c);

}


