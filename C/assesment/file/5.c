#include<stdio.h>
void main(int argc,char** argv)
{
	if(argc!=2)
	{
		printf("usage:./a.out fname...\n");
		return;
	}
	FILE *fp;
	fp=fopen(argv[1],"r");
	int c=0;
	char ch;
	
	while((ch=fgetc(fp))!=-1)
	c++;
	
	printf("c=%d\n",c);
}
