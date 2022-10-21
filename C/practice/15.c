#include<stdio.h>
#include<math.h>
void main()

{
int num;
printf("enter num..\n");
scanf("%g",&num);

if(log10(num)/log10(3)%1==0)
printf("pow of 3 num..\n");
else
printf("not pow of 3 num..\n");

}
