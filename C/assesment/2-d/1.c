#include<stdio.h>
#include<string.h>
void main()
{
	char s[5][10],t[10];
	int r,i,j;
	r=sizeof(s)/sizeof(s[0]);
	for(i=0;i<r;i++)
	{
		printf("%d string..\n",i);
		scanf("%s",s[i]);
	}
	printf("--------before sorting-------\n");
	for(i=0;i<r;i++)
		printf("%s\n",s[i]);

	for(i=0;i<r-1;i++)
	{
		for(j=0;j<r-1-i;j++)
		{
			if(strcmp(s[j],s[j+1])>0)
			{
				strcpy(t,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],t);
			}
		}
	}
	printf("---------after sorting--------\n");
	for(i=0;i<r;i++)
		printf("%s\n",s[i]);
}
