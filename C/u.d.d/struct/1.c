#include<stdio.h>
struct one
{
char ch;
int i;
float f;
};
void main()
{
struct one o1,o2;
printf("enter char...\n");
scanf(" %c",&o1.ch);
printf("enter int...\n");
scanf("%d",&o1.i);
printf("enter float...\n");
scanf("%g",&o1.f);
printf("o1 member are...\n");
printf("%c %d %g\n",o1.ch,o1.i,o1.f);
o2=o1;
printf("o2 member are...\n");
printf("%c %d %g\n",o2.ch,o2.i,o2.f);


}
