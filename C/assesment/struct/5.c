#include<stdio.h>
#pragma pack(3);
struct one
{
int i;
char ch;
char ch1;
char ch3;
char ch2;
char ch4;
float f;
};
void main()
{
struct one o1;
printf("o1=%ld\n",sizeof(o1));
printf("o1.i=%ld o1.ch=%ld o1.f=%ld\n",sizeof(o1.i),sizeof(o1.ch),sizeof(o1.f));
printf("o1.i=%u o1.ch=%u o1.4=%u o1.f=%u\n",&o1.i,&o1.ch,&o1.ch4,&o1.f);
}
