#include<stdio.h>
void str_del(char*,char);
void str_cpy(char*,char*);
void main()
{
	char s[10],ch,*m;
	printf("enter string..\n");
	scanf("%s",s);
	printf("enter char..\n");
	scanf(" %c",&ch);
	str_del(s,ch);
	
}
void str_del(char *p,char ch)
{
	char *s1;
	int i=0;
    s1=p;
	while(s1[i])
	{
		if(ch==s1[i])
		{
		str_cpy(s1+i+1,s1+i);
		i--;
		} 
	s1++;  
	}
printf("s=%s\n",p);
}

void str_cpy(char *s,char *d)
{
	int i;
	for(i=0;s[i];i++)
		d[i]=s[i];
	d[i]='\0';
}
