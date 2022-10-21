/* a b c d
   a b c
   a b 
   a

*/

#include<stdio.h>
void main()
{
int i,j,n;
char ch;
printf(" n= ");
scanf(" %d",&n);
for(i=0;i<n;i++)
{
  for(j=0,ch='a';j<n-i;j++,ch++)
  printf(" %c ",ch);
printf(" \n");

}

}
