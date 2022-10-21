#include<stdio.h>
void main()
{
int i;
FILE *fp;
fp=fopen("data","r");
fscanf(fp,"%d",&i);
printf("i=%d\n",i);
}
