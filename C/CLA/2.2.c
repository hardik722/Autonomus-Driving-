#include<stdio.h>
#include<stdlib.h>
double my_atof(char *);

void main()
{
	double n;
	char s[10]="-122.5a3";
	n=atof(s);
	printf("n(predefine)=%f\n",n);
	n=my_atof(s);
	printf("num(user defined)=%f\n",n);
}

double my_atof(char *p)
{
	int i=0,j,sum;
	double f1,f2=0,f3;
if(p[0]=='-'||p[i]=='+')
i=1;
	for(sum=0;p[i];i++)
	{
		if(p[i]>='0' && p[i]<='9')
		{
			sum=sum*10+p[i]-48;
		}
		else
		break;
	}
f1=sum;
if(p[i]=='.')
{
sum=0;
	for(i=i+1,j=1;p[i];i++)
	{
		if(p[i]>='0' && p[i]<='9')
		{
			sum=sum*10+p[i]-48;
			j*=10;
		}
		else
		break;
	}
f2=sum;
f2=f2/j;
}
f3=f1+f2;

if(p[0]=='-')
f3=-f3;
	return f3;
}











