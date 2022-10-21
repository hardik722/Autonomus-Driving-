#include<stdio.h>
int str_cmp(char *,char*);
void main()
{
	int n,r;
	printf("enter string size...\n");
	scanf("%d",&n);
	
	char s1[n],s2[n];
	printf("enter string 1...\n");
	scanf("%s",s1);
	
	printf("enter string 2...\n");
	scanf("%s",s2);

	r=str_cmp(s1,s2);
	
	if(r==0)
		printf("both are same...\n");
	else if(r==1)
		printf("s1 is big...\n");
	else
		printf("s2 is big...\n");
}

int str_cmp(char *p,char *q)
{
	int i;
	for(i=0;p[i];i++)
		if(p[i]!=q[i])
			break;
	if(p[i]==q[i])
		return 0;
	else if(p[i]>q[i])
		return 1;
	else
		return -1;
}


