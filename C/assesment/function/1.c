#include<stdio.h>
int my_strcmp(char*,char*);
void main()
{
	char s1[10],s2[10];
	printf("enter s1...\n");
	scanf("%s",s1);
	printf("enter s2...\n");
	scanf("%s",s2);
	int l;
	l=my_strcmp(s1,s2);
	if(l==0)
		printf("both are same...\n");
	if(l==1)
		printf("s1 is big...\n");
	if(l==-1)
		printf("s2 is big...\n");
}
int my_strcmp(char *p,char *q)
{
	int i;
	for(i=0;p[i];i++)
	{
		if(p[i]!=q[i])
			break;
	}
	if(p[i]>q[i])
		return 1;
	else if(p[i]<q[i])
		return -1;
	else
		return 0;
}

