#include<stdio.h>
void main(int argc,char** argv)
{
if(argc!=3)
{
printf("usage:./a.out sfile dfile...\n");
return;
}
FILE *fp,*fd;
fp=fopen(argv[1],"r");
fd=fopen(argv[2],"r+");
char ch;
while((ch=fgetc(fp))!=-1)
fputc(ch,fd);

}

