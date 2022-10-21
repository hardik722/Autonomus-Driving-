/*
	fopen
	fgetc....*/

#include<stdio.h>
void main(int argc,char** argv)
{
	if(argc!=2)
	{
		printf("usag: ./a.out data\n");
		return;
	}
	FILE *fp;
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file does not exist...\n");
		return;
	}
	char ch;
	int c=0;
	while((ch=fgetc(fp))!=-1)
		c++;
	printf("c=%d\n",c);
}
