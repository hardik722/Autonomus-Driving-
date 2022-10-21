#include<stdio.h>
void main()
{
int i,j,k;
for(i=1;i<=5;i++)
{ 
k=1;
for(j=1;j<=5;j++)
{
if((j==1)||(i==5)||(j==i))
{
printf("%d ",k);
}
else
printf("  ");
k++;
}
printf("\n");
}

}
