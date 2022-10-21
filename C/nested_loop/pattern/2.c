/* ------->j
  |  0 1 2 3
  |  0 1 2
  |  0 1
  i  0
*/

#include<stdio.h>
void main()
{
int i,j;

for(i=0;i<4;i++)
{ 
  for(j=0;j<4-i;j++)
  printf(" %d ",j);
printf("\n");

}
printf("\n");

}  
