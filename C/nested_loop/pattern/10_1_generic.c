/*      *
       * *
      * * *
     * * * *
      * * *
       * *
        *   */

#include<stdio.h>
void main()
{
int i,j,k,n;
printf(" n=");
scanf("%d",&n);


for(i=0;i<n-1;i++)
{ 
  for(j=0;j<=n-1-i;j++)
  printf(" ");
  for(k=0;k<i+1;k++)
  printf("* ");
printf("\n");
}

for(i=0;i<n;i++)
{  
   for(j=0;j<i+1;j++)
   printf(" ");
   for(k=0;k<n-i;k++)
   printf("* ");
printf(" \n");
}


}
