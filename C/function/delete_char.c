#include<stdio.h>
void str_cpy(char *,char *);
void main()
{
char s[50],ch,i;
	printf("enter string..\n");
	scanf("%s",s);
	//printf("Enter the char\n");
	//scanf(" %c",&ch);
	//for(i=0;s[i];i++)
	//{
		//if(s[i]==ch)
		//{
		str_cpy(s+5,s);
		//i--;
		//}
	//}
printf("s=%s\n",s);
}

void str_cpy(char *s,char *d)
{
int i;
for(i=0;s[i];i++)
d[i]=s[i];
d[i]='\0';
}


