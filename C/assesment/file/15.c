#include<stdio.h>
void main(int argc,char** argv)
{
	if(argc!=4)
	{
		printf("usage:./a.out fname...\n");
		return;
	}
	FILE *fp;
	char ch;
	fp=fopen(argv[1],"r+");
	while((ch=fgetc(fp))!=-1)
	{
		if(ch==argv[2][0])
		{
			fseek(fp,-1,SEEK_CUR);
			fputc(argv[3][0],fp);
		}
	}
}

