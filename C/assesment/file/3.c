#include<stdio.h>
void main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("usage:./a.out sfile dfile..\n");
		return;
	}
	FILE *fp,*fd;
	fd=fopen(argv[2],"r");
	int op;
	char ch;
	if(fd)
	{
		printf("file is already exist...\n");
		printf("enter 1) for truncate and write..2)leave it...\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:fd=fopen(argv[2],"w");
				   fp=fopen(argv[1],"r");
				   while((ch=fgetc(fp))!=-1)
					   fputc(ch,fd);
				   break;
			case 2:return;
		}
	}
}
