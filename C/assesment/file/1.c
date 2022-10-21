#include<stdio.h>
void main(int argc,char**argv)
{
if(argc!=2)
{
printf("usage:./a.out fname...\n");
return;
}
FILE *fp;
fp=fopen(argv[1],"r");
if(fp==0)
{
printf("file is not present...\n");
return;
}
char ch;
while((ch=fgetc(fp))!=-1)
printf("%c",ch);
}
