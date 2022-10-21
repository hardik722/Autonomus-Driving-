#include<stdio.h>
void main()
{
	int n,c=0;
	char s1[50],s2[50],ch;
	printf("enter line no...\n");
	scanf("%d",&n);

	printf("enter the string ....\n");
	scanf(" %[^\n]",s2);

	FILE *fp,*ft;
	fp=fopen("data","r");
	ft=fopen("t_file","w");
	while(fgets(s1, 50, fp) != 0) ////getting line upto '\n' one by one...
	{
		c++;                     //// every line counter increment...
		if(c==n)               ////if counter is equal to replacing line..then s2 string put it into second file...
		{
			fputs(s2,ft);     //fputs put the string without terminating '\0' .
			fputc('\n',ft);  // we need go for next line.
		}                      
		else
		{
			fputs(s1,ft);  //if counter is not replacing line...then s1 put it into the second file..
		}
	}
rewind(ft);

fp=fopen("data","w");    //reopen data file with write mode...
ft=fopen("t_file","r"); 

while((ch=fgetc(ft))!=-1)  
fputc(ch,fp);
}









