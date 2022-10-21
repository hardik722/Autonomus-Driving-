#include<stdio.h>
int str_cmp(char*,char*);
void main()
{
	char s1[10],s2[10];
	int m;
	printf("enter strings..\n");
	scanf("%s",s1);
	scanf("%s",s2);
	m=str_cmp(s1,s2);
	if(m==0)
		printf("same string..\n");
	if(m==-1)
		printf("2nd big..\n");
	if(m==1)
		printf("1st big..\n");

}
int str_cmp(char *p1,char *p2)
{
	int i;
	
for(i=0;p1[i]!='\0';i++)
{
if(p1[i]!=p2[i])
break;
}
if(p1[i]==p2[i])
return 0;
else if(p1[i]<p2[i])
return -1;
else
return 1;

}
