#include<stdio.h>
int str_pel(char*,char*);
void main()
{
	char s1[10],s2[10];
	printf("enter str...\n");
	scanf("%s",s1);
	int i,j,l;
	for(i=0;s1[i];i++);
	l=i;
	for(j=0,i=l-1;i>=0;i--,j++)
		s2[j]=s1[i];
	s2[j]='\0';
	printf("s2=%s\n",s2);
	l=str_pel(s1,s2);
	if(l==0)
		printf("pelendrom str...\n");
	if(l==1)
		printf("not pelendrom...\n");
}
int str_pel(char *p,char *q)
{
	int i;
	for(i=0;p[i];i++)
	{
		if(p[i]!=q[i])
	    break;
	}
if(p[i]==q[i])
return 0;
if(p[i]!=q[i])
return 1;
}


