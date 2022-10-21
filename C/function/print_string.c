#include<stdio.h>
void print_string(char *);
void main()
{
	char s[100];
	printf("enter string..\n");
	scanf("%[^\n]",s);
	print_string(s);
}
void print_string(char *p)
{
	int i;
	for(i=0;p[i]!='\0';i++)
		printf("%c",p[i]);
	printf("\n");

}
