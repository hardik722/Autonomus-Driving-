#include<stdio.h>
void main()
{
	char s[10],m;
	int i,c;
	
	printf("enter the string...= ");
	scanf("%s",s);
	
	printf("enter char...m= ");
	scanf(" %c",&m);
	///////////////////////////////
	for(i=0,c=0;s[i]!='\0';i++)
	{
		if(m==s[i])
			c++;
	}
	printf("c=%d\n",c);

}
