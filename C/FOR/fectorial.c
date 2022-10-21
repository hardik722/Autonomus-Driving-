#include<stdio.h>
void main()
{
long int num,fect;

printf(" enter the num =");
scanf(" %ld",&num);

for(fect=1;num;num--)
fect=fect*num;

printf("  fect=%ld\n",fect);

}
