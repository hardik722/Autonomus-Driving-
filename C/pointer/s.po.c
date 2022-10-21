#include<stdio.h>
void main()
{
char ch,*cp;
int i,*ip;
float f,*fp;
printf("ch=%ld *c=%ld\n",sizeof(ch),sizeof(cp));
printf("i=%ld *i=%ld\n",sizeof(i),sizeof(ip));
printf("f=%ld *f=%ld\n",sizeof(f),sizeof(fp));

}
