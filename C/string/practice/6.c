#include<stdio.h>
void main()
{
	char s[10],ch;
	int i,j,l;
	printf("enter string=");
	scanf("%s",s);
	printf("s=%s\n-------\n",s);

	printf("enter char= ");
	scanf(" %c",&ch);
	printf("ch=%c\n-------\n",ch);
        
	for(i=0;s[i]!='\0';i++);
	l=i;
	printf("length=%d\n",l);

	for(i=0;s[i]!='\0';i++)
	{
		if(ch==s[i])
		{
			s[i]='\0';
			
				for(j=i;j<l;j++)
				s[j]=s[j+1];
		i--;
		}
		
	}
	printf("s=%s\n",s);
}
