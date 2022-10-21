#include<stdio.h>
void main()
{
	char s1[100],s2[100];
    int i,j,l;

	printf("enter string1...\n");
	scanf("%[^\n]",s1);
	printf("s1=%s\n",s1);


	printf("enter string2...\n");
	scanf(" %[^\n]",s2);
	
	for(i=0;s1[i];i++);
	l=i;
    s1[l]=' ';
    for(i=l+1,j=0;s2[j];i++,j++)
	{
		s1[i]=s2[j];
    }
s1[i]='\0';
printf("s1=%s\n",s1);

}
