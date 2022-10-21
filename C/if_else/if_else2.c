// wap- to scan from user and display the given input is lower case or upper case.
#include<stdio.h>
void main()
{
char ch;
printf("enter the ch=");
scanf("%c",&ch);
	if (ch>='a' && ch<'z')
	{
	printf("lower case\n");
	}
	else if(ch>='A' && ch<='z')
	{
	printf("upper case\n");
	}
	else if(ch>='0' && ch<='9')
	{
	printf("digit\n");
	}
	else
	{
	printf("special symbol\n");
	}

}
