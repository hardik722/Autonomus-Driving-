#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(int argc,char** argv)
{
	if(argc!=3)
	{
		printf("usage:./a.out f1name f2name...\n");
		return;
	}
	FILE *fp=fopen(argv[1],"r"),*fd;
	int l,i;
	char ch,*p;
	fseek(fp,0,SEEK_END);
	l=ftell(fp);
	printf("l=%d\n",l);
	rewind(fp);
	p=calloc(l,1);
	for(i=0;i<l;i++)
	{
		ch=fgetc(fp);
		p[i]=ch;
	}
	p[i]='\0';
	printf("p=%s",p);

for(i=0;p[i];i++);
l=i;
fd=fopen(argv[2],"w");
p[l]='\0';
for(i=l-1;i>=0;i--)
{
	fputc(p[i],fd);
}
printf("\n");
}



