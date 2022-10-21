/* 
* WAP to scan num and bit pos. from user
* after that display a menu for set/clear/comlement.
* take option from user.
* depends on option perform the task and display result.
*/

#include<stdio.h>
void main()
{
int num,pos,op;
printf("enter the num\n");
scanf("%d",&num);
printf("enter the bit pos\n");
scanf("%d",&pos);

printf("enter the op\n1)set\n2)clear\n3)comp\n");
scanf("%d",&op);
if(op==1)
{
num=num|1<<pos;
printf("new num is=%d\n",num);
}
else if(op==2)
{
num=num&~(1<<pos);
printf("new num is=%d\n",num);
}
else if(op==3)
{
num=num^(1<<pos);
printf("new num is=%d\n",num);
}
else
{
printf("wrong input\n");
}


}
