#include<stdio.h>
void main()
{
int a[5]={10,20,30,540,50};
int *ip,i;

for(i=0;i<5;i++)
{
//ip=(a+i);
printf("%d ",*(a+i));
}

printf("\n");

}
