/* a
   a b 
   a b c 
   a b c d
*/   


#include<stdio.h>
void main()
{
int i,j,ch;

for(i=0;i<4;i++)
{
  for(j=0,ch='a';j<i+1;j++,ch++)
  printf(" %c ",ch);

printf("\n");

}

}
