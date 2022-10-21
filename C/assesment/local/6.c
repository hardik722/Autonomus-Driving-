#include<stdio.h>
void main()
{
char s1[50],s2[50];
printf("enter s1...\n");
scanf(" %[^\n]",s1);
printf("enter s2...\n");
scanf(" %[^\n]",s2);
int i,j,k;
for(i=0;s1[i];i++);
s1[i]=' ';
for(j=0,k=i+1;s2[j];j++,k++)
s1[k]=s2[j];
s1[k]='\0';
printf("s1=%s\n",s1);
}
