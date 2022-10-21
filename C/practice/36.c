#include<stdio.h>
#include<stdlib.h>
void main()
{
char s1[20],s2[20],*p;
printf("enter s1...\n");
scanf("%s",s1);
printf("enter s2...\n");
scanf("%s",s2);
int l1,l2,i;
for( i=0;s1[i];i++);
 l1=i;
for( i=0;s2[i];i++);
 l2=i;
if(l1>l2)
p=calloc(l1,1);
if(l1<l2)
p=calloc(l2,1);

for(int i=0;s1[i];i++)
p[i]=s1[i];
s1[i]=0;

for(int i=0;s2[i];i++)
s1[i]=s2[i];
s2[i]=0;
for(int i=0;p[i];i++)
s2[i]=p[i];

printf("p=%s\n",p);
printf("s1=%s\n",s1);
printf("s2=%s\n",s2);
}
