#include<stdio.h>
void main()
{
	char s[100];
	int i,l,c=0;
	printf("enter str...\n");
	scanf("%[^\n]",s);

	for(i=0;s[i];i++);
	l=i;
	printf("l=%d\n",l);
	s[l]=' ';
	for(i=0;i<l+1;i++)
	{
		if(s[i]==' ')
		{
			c++;
			
		}
	}
	printf("c=%d\n",c);

}
