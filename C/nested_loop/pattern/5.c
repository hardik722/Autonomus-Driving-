/* a
   b b
   c c c
   d d d d

*/

#include<stdio.h>
void main()
{
int i,j,ch;
for(i=0,ch='a';i<4;i++,ch++)
{  
  for(j=0;j<4-i;j++)
  printf(" %c ",ch);
printf("\n");

}

}
