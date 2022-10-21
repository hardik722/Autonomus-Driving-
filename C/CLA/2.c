#include<stdio.h>
#include<stdlib.h>
int my_atoi(char *);
void main()
{
	char s[]="-12A34";
	int i;
	i=atoi(s);
	printf("s=%s i=%d\n",s,i);
	i=my_atoi(s);
	printf("s=%s i=%d\n",s,i);
}
int my_atoi(char *p)
{
	int i=0,num;
	if(p[0]=='-' || p[0]=='+')
		i=1;
	for(num=0;p[i];i++)
	{
		if(p[i]>='0' && p[i]<='9')
			num=num*10+p[i]-48;
		else
			break;
	}
	if(p[0]=='-')
		num=-num;
	return num;
}
