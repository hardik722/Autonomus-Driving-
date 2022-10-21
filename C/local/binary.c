#include<stdio.h>
void main()
{
int num,pos=31,i;
printf("enter the num\n");
scanf("%d",&num);

l1:
i=num>>pos&1;
printf("%d",i);
pos--;
if(pos>=0)
{
goto l1;
}
printf("\n");

}
