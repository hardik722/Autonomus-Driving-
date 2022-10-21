#include<stdio.h>
void reverse(char *);
void my_rev(char * , char *);
void main()
{
	int n;
	printf("enter string size...\n");
	scanf("%d",&n);

	char s[n],s1[n];
	printf("enter str...\n");
	scanf("%s",s);

	reverse(s);
	printf("%s\n",s); 
	
	printf("enter str s1..\n");
	scanf("%s",s1);
	
	my_rev(s1+2,s1+6);
	printf("s1=%s\n",s1);
}
void reverse(char *p)
{
	int l,i,j;
	char t;

	for(i=0;p[i];i++);
	l=i;
	for(i=0,j=l-1;i<j;i++,j--)
	{
		t=p[i];
		p[i]=p[j];
		p[j]=t;
	}
}

void my_rev(char *p,char *q)
{
	char t;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}

}
