#include<stdio.h>
void main(int argc,char**argv)
{
if(argc!=4)
{
printf("usage: ./a.out f1file f2file new_fname...\n");
return;
}
FILE *fs1,*fs2,*fd;

int op;
printf("enter op...\n op=>1 for syntax:f1file <- f2file \n op=>2 for syntax:f2file <- f1file...\n");
scanf("%d",&op);

char ch;
if(op==1)                  //if option is 1 than join file 1 with file 2...
{
fs1=fopen(argv[1],"r");
fs2=fopen(argv[2],"r");
fd=fopen(argv[3],"w");

while((ch=fgetc(fs1))!=-1)
fputc(ch,fd);


while((ch=fgetc(fs2))!=-1)
fputc(ch,fd);

}

if(op==2)                //if option is 2 than join file 2 with file 1...
{
fs1=fopen(argv[1],"r");
fs2=fopen(argv[2],"r");
fd=fopen(argv[3],"w");

while((ch=fgetc(fs2))!=-1)
fputc(ch,fd);

while((ch=fgetc(fs1))!=-1)
fputc(ch,fd);

}

}









