#include<stdio.h>
#include<stdlib.h>
double my_atof(char *);
void main()
{
	double n;
	char s[10]="-12.3a4";
	n=atof(s);
	printf("predefined=%g\n",n);
	n=my_atof(s);
	printf("userdefined=%g\n",n);
}
double my_atof(char *p)
{
	int n1,i=0,j,pow=1;
	double n2=0,sum;
	if(p[0]=='+' || p[0]=='-')
		i=1;

	for(n1=0;p[i];i++)
	{
		if(p[i]>='0'&&p[i]<='9')
			n1=n1*10+p[i]-48;
		else
			break;
	}
	if(p[i]=='.')
	{
		for(j=i+1;p[j];j++)
		{
			if(p[j]>='0'&&p[j]<='9')
			{
				n2=n2*10+p[j]-48;
				pow*=10;
			}
			else
				break;
		}
	}
	n2=n2/pow;
	sum=n1+n2;
	if(p[0]=='-')
		sum=-sum;
	return sum;
}






