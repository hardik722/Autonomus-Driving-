#include<stdio.h>
void main()
{
int i,j,k;

for(i=0;i<=3;i++)
{ 
for(j=0;j<i+1;j++)
{
if(j%2==0)
k=1;
else
k=0;
printf("%d",k);
}
printf("\n");

}

}
