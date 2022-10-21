#include<stdio.h>
void main()
{
	char s1[50],s2[50],c[50];
	
	printf("enter str1...\n");
	scanf("%s",s1);
	
	printf("enter str2...\n");
	scanf("%s",s2);
	
	int i,j,k;
	
	for(i=0,j=0,k=0;s1[i] && s2[j];i++,j++)
	{
		c[k]=s1[i];
		k++;
		c[k]=s2[j];
		k++;
	}
	if(s1[i]!='\0')
	{
		while(s1[i])
		{
			c[k]=s1[i];
			i++;
			k++;
		}
	}
	 if(s2[j]!='\0')
	{
		while(s2[j])
		{
			c[k]=s2[j];
			j++;
			k++;
		}
	}
	
		c[k]='\0';
		printf("%s\n",c);

}
