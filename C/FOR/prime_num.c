#include<stdio.h>
void main()
{
int num,i,c,j=0;
l1:
printf("enter num= ");
scanf("%d",&num);

for(i=2,c=0;i<num;i++)
{
  if(num%i==0)
   c++;
}
if (c==0)
printf("prime num  c = %d\n",c);
else
printf("not prime number  c = %d\n",c);
if(j<2)
{
   j++;
   goto l1;
}

}
