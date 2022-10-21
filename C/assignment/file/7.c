#include<stdio.h>
void main(int argc,char **argv)
{
	if(argc<3)
	{
		printf("usage: ./a.out fs fd1 fd2 fd3...\n");
		return;
	}
	char s[50];
	int n,c=0,i;
	printf("enter line no...\n");  // enter line no which you want to copy...
	scanf("%d",&n);
	FILE *fp,*fd;
	fp=fopen(argv[1],"r");     // open the source file in read mode...
	while(fgets(s,50,fp)!=0)  // fetch the line untill '\n' and store into a string called s...
	{
		c++;                // if '\n' will come increment the counter...
		if(c==n)          
			break;
	}
	for(i=2;i<argc;i++)   //putting string s into each destination file using opening each dest. file in write mode..
	{
		fd=fopen(argv[i],"w");
		fputs(s,fd);
	}

}
