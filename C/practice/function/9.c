#include<stdio.h>
void natural(int,int);
void main()
{
int num1,num2;
printf("num1 n...\n");
scanf("%d",&num1);
printf("num2 n..\n");
scanf("%d",&num2);
natural(num1,num2);

}
void natural(int n1,int n2)
{
if(n1<=n2)
{
printf("%d ",n1);
natural(n1+1, n2);
}
}
