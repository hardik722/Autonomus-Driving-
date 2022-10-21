#include<stdio.h>
void main()
{
int age;

printf("enter the age\n");
scanf("%d",&age);
if(age>=18)
printf("eligible for votting\n");
else if(age>0 && age<=17)
printf("not eligible for votting\n");
else
printf("wrong input\n");
}
