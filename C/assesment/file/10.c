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
	if(fp==0)
	{
		printf("file does not exist...\n");
		return;
	}
	char ch,s[50];
	int c=0,i;

	while(fgets(s,50,fp)!=0)
		c++;
	
	printf("line=%d ",c);
	
	rewind (fp);
	c=0;
	
	while((ch=fgetc(fp))!=-1)
		c++;
	
	printf("char=%d ",c);
	
	rewind(fp);
c=0;
while(fscanf(fp,"%s",s)!=-1)
c++;	

	
	printf("words=%d fname=%s\n",c,argv[1]);
}


