#include<stdio.h>
void main()
{
int n1=10,n2=5;
char op;
printf("enter the op= ");
scanf("%c",&op);
switch(op)
{
   case '+': printf("result=%d\n",n1+n2);
             break;
   
   case '-': printf("result=%d\n",n1-n2);
             break;
   
   case '*': printf("result=%d\n",n1*n2);
             break;
   
   case '/': printf("result=%d\n",n1/n2);
             break;
}
   defult  :printf("wrong input\n");



}
