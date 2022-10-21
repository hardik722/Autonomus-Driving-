#include<stdio.h>
void main()
{
int i;
printf("enter i..1 or 0..\n");
scanf("%d",&i);
//(i==1)?printf("i=0\n"):printf("i=1\n");
/*switch(i)
{
case 0 :printf("i=1\n");
		break;
case 1 :printf("i=0\n");
		break;
}*/

printf("i=%d\n",!i);
}
