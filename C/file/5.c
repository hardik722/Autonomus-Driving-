/*  fopen
	fgetc
	fputc
	fputs....*/

#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	if(argc!=4)
	{
		printf("usage: ./a.out data a b...\n");
		return;
	}
	FILE *fp;
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file does not exsist...\n");
		return;
	}
	int c=0;
	char ch;
	while((ch=fgetc(fp))!=-1)
		c++;

	char *p;
	p=malloc(c+1);
	

int i=0;	
fp=fopen(argv[1],"r");
	while((ch=fgetc(fp))!=-1)
	{
		p[i]=ch;
		i++;
	}
	p[i]='\0';
	


for(i=0;p[i];i++)
	{
		if(p[i]==argv[2][0])
			p[i]=argv[3][0];
	}


fp=fopen(argv[1],"w");
	/*for(i=0;p[i];i++)
		fputc(p[i],fp);*/
int n;
fputs(p,fp);
printf("%d\n",n);
}
