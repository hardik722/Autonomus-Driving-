#include<stdio.h>
void main(int argc,char** argv)
{
if(argc!=2)
{
printf("usage:./a.out fname...\n");
return;
}
FILE *fp=fopen(argv[1],"w");
char s[5]={'a','b','c'};
int i;
/*for(i=0;i<5;i++)
fprintf(fp,"%d ",a[i]);*/
for(i=0;i<3;i++)
{
fputc(s[i],fp);
}

}
