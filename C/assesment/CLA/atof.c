#include<stdio.h>
#include<stdlib.h>
float my_atof(char *);
void main()
{
	char s[10]="-12.1a34";
	float l,l1;
	l=atof(s);
	printf("pre=%f\n",l);
	l1=my_atof(s);
	printf("u.d=%f\n",l1);
}
float my_atof(char *p)
{
	int i,m;
	float num,n=0;
	if(p[0]=='+' || p[0]=='-')
		i=1;
	else
		i=0;

	for(num=0;p[i];i++)
	{
		if(p[i]>='0' && p[i]<='9')
			num=num*10+p[i]-48;
		else
			break;
	}
if(p[i]=='.')
{	
	for(i=i+1,m=1;p[i];i++)
	{
		if(p[i]>='0' && p[i]<='9')
		{
		n=n*10+p[i]-48;
		m=m*10;
		}
		else
		break;
	}	
	n=n/m;
}	

		num=num+n;
	if(p[0]=='-')
		num=-num;

	return num;
}






