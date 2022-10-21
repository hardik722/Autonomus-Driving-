/*************** vertual sorting ***************/
#include<stdio.h>
#include<string.h>
void main()
{
	char s[5][10],*p[5];
	int i,j,r;
	r=sizeof(s)/sizeof(s[0]);
	for(i=0;i<r;i++)
	{
		printf("enter %d str...\n",i);
		scanf("%s",s[i]);
		p[i]=s[i];
	}
	char *t;
	for(i=0;i<r-1;i++)
	{
		for(j=0;j<r-1-i;j++)
		{
			if(strcmp(p[j],p[j+1])>0)
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
printf("after sorting...\n");
for(i=0;i<r;i++)
printf("%s\n",p[i]);
}


