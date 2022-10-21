#include<stdio.h>
void main(int argc,char** argv)
{
if(argc!=2)
{
printf("usage:./a.out fname...\n");
return;
}
FILE *fp;
fp=fopen(argv[1],"w");
char s[10];
printf("enter str...\n");
scanf("%s",s);
fwrite(s,10,10,fp);
}
