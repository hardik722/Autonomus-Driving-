#include<stdio.h>
void main()
{
char s[10];
int i;
printf("enter string\n");
scanf("%s",s);
printf("s=%s\n",s);

for(i=0;i<10;i++);
printf("%c",s[i]);

//printf("\nlength=%d &s=%u &i=%u\n",i,s,&i);
}
