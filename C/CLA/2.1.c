#include<stdio.h>
#include<stdlib.h>
int my_atoi(char *);
void main()
{
	char s[10]="1234";
	int n,num;
	n=atoi(s);
	printf("n(predefined)=%d\n",n);
	num=my_atoi(s);
	printf("num(user defined)=%d\n",num);
}
int my_atoi(char *p)
{
	int i,num;
	if(p[0]=='-' || p[0]=='+')
		i=1;
	else 
		i=0;

	for(num=0;p[i];i++)
	{
		if(p[i]>='0' && p[i]<='9')
			num=num*10+p[i]-48;
		else
		{
			break;
		}
	}

	if(p[0]=='-')
		num=-num;
	return num;
}
