#include<stdio.h>
void main()
{
int n1,n2,op;
printf("enter the n1 and n2\n");
scanf("%d%d",&n1,&n2);
printf("1)add\n2)sub\n3)multiplication\n4)division\n");
printf("enter op= ");
scanf("%d",&op);
switch(op)
{
case 1:printf(" ans=%d\n",n1+n2);
       break;
case 2:printf(" ans=%d\n",n1-n2);
	break;
case 3:printf(" ans=%d\n",n1*n2);
	break;	
case 4:printf(" ans=%d\n",n1/n2);
	break;
default : printf(" wrong input\n");
}

}
