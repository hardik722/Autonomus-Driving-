#include<stdio.h>
void main(int argc,char** argv)
{
	if(argc!=3)
	{
		printf("usage:./a.out fs fd..\n");
		return;
	}
	FILE *fs,*fd;
	fs=fopen(argv[1],"r");
	if(fs==0)
	{
		printf("source file is not present...\n");
		return;
	}
	int op;
	char ch;
	fd=fopen(argv[2],"r");
	if(fd!=0)
	{
		printf("destination file is already available...\n");
		printf("enter option...\n1)truncate and write...\n2)leave...\n");
		scanf("%d",&op);
		if(op==1)
		{
			fd=fopen(argv[2],"w");
			while((ch=fgetc(fs))!=-1)
				fputc(ch,fd);
		}
		if(op==2)
			return;
	}
	else if(fd==0)
	{
	printf("destination file is not present...\n");
	return;
	}
}




