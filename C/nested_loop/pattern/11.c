/*   * * * *
      * * *
       * *
    	*
       * *
      * * *
     * * * *   */   	
#include<stdio.h>
void main()
{
int i,j,k,n;
//printf("enter the n= ");
//scanf("%d",&n);

for(i=0;i<4;i++)
{
   for(j=0;j<i+1;j++)
   printf(" ");
   for(k=0;k<4-i;k++)
   printf("* ");
printf("\n");
}
for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   printf(" ");
   for(k=0;k<i+2;k++)
   printf("* ");
printf("\n");
}

}
