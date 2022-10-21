#include<stdio.h>
#include<stdlib.h>
void print(char **q,int r)
{
	int i;
	for(i=0;i<r;i++)
		printf("%s\n",q[i]);
}
void main()
{
	char *p[3];
//	int r=sizeof(p)/sizeof(p[0]);
	int i;
	for(i=0;i<3;i++)
	p[i]=(char *)malloc(sizeof(char)*20);
//	printf("r=%d\n",r);
	for(i=0;i<3;i++)
	{
		printf("enter %d str..\n",i);
		scanf("%s",p[i]);
	}
	print(p,3);
}
