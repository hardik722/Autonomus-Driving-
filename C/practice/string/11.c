#include<stdio.h>
void main()
{
	char s[100];
	printf("enter string..\n");
	scanf("%[^\n]",s);

	int i,j,c,l,f[100];
	for(i=0;s[i];i++)
		f[i]=-1;
	for(i=0;s[i];i++);
	l=i;

	for(i=0;s[i];i++)
	{
		c=1;
		for(j=i+1;j<l;j++)
		{
			if(s[i]==s[j])
			{
				c++;
				f[j]=0;
			}
			if(f[i]!=0)
				f[i]=c;
		}
	}
	f[i-1]=c;
	for(i=0;s[i];i++)
	{
	if(f[i]!=0)	
	printf("%c==>%d\n",s[i],f[i]);
    }

}
