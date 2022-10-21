#include<stdio.h>
void main()
{
int i=1234;
FILE *fp;
fp=fopen("data","w");
fprintf(fp,"%d",i);
}
