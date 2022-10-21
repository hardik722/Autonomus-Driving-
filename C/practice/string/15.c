#include<stdio.h>
void main()
{
	char s1[50],s2[50],t;
	printf("enter str1...\n");
	scanf("%[^\n]",s1);
	printf("enter str2...\n");
	scanf(" %[^\n]",s2);
//	printf("\nenter char...\n");
//	scanf(" %c",&ch);
int i,l1,l2;

for(i=0;s1[i];i++);
l1=i;
for(i=0;s2[i];i++);
l2=i;

t=s1[l1-1];
s1[l1-1]=s2[l2-1];
s2[l2-1]=t;

printf("s1=%s\n",s1);
printf("s2=%s\n",s2);

}
