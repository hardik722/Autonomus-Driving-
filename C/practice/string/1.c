#include<stdio.h>
void main()
{
char s[100];
int i;
printf("enter string...\n");
scanf("%s",s);
for(i=0;s[i]!='\0';i++);
printf("%d \n",i);

}
