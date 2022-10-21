/*      *
       * *
      * * *
     * * * *
*/

#include<stdio.h>
void main()
{
int i,j,k,n;
//printf("enter n= ");
//scanf(" %d",&n);
for(i=0;i<5;i++)
{
  for(j=0;j<5-i;j++)
  printf(" ");
  for(k=0;k<i+1;k++)
  printf("* ");
printf("\n");

}

}
