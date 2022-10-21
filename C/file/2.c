#include<stdio.h>
void main(int argc,char **argv)
{
if(argc<3)
{
printf("usage:./a.out fs fd\n");
return;
}
FILE *fs,*fd;
char ch;
fs=fopen(argv[1],"r");
if(fs==0)
{
printf("file is not present...\n");
return;
}
int i;
for(i=2;i<argc;i++)
{
fs=fopen(argv[1],"r");
fd=fopen(argv[i],"w");
while((ch=fgetc(fs))!=-1)
fputc(ch,fd);
}
}
