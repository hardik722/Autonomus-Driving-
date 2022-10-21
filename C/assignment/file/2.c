#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	fp=fopen("data","r");
	int n,l,c=0;
	printf("enter line no...\n");
	scanf("%d",&n);
	char s[50];
    
	/////////////////////////////// finding line length which you want to delete
	while(fgets(s,50,fp)!=0)
	{
		c++;
		if(c==n)
		{
			l=strlen(s);
			printf("l=%d\n",l);
		}
	}
	
	/////////////////////////////// check the file size
	int fs;
	fs=ftell(fp);
	printf("fs=%d\n",fs);
	rewind(fp);
	
	////////////////////////////// allocate a dynamic memory as per file size
	char *p,ch;
	p=malloc(fs+1);
	
    /////////////////////////// if cpi is on 1st position and line number is 1,jump cpi accoroding to 1st line length
	int c1=0,i=0,pos;
	pos=ftell(fp);
	if(pos==(n-1))
		fseek(fp,l,SEEK_CUR);
	
	/////////////////////////////////// if line number is 2,3,4,5...then copy one by one char in dynamic memory.
	while((ch=fgetc(fp))!=-1)
	{
		p[i]=ch;
		i++;
		if(ch=='\n')
		{
			c1++;
			if(c1==(n-1))
				fseek(fp,l,SEEK_CUR);

		}
	}
	p[i]='\0'; // putting '\0'(null) at last in dynamic memory so that fetching becomes easy.
	
	///////////////////////////  open once again "data" file with write mode , putting data from dynamic memory.
	fp=fopen("data","w");  

	fputs(p,fp);


}
