#include<stdio.h>
struct one
{
int rollno;
char name[10];
float mark;
};
void main()
{
struct one o1;
printf("enter rollno...\n");
scanf("%d",&o1.rollno);
printf("enter name...\n");
scanf("%s",o1.name);
printf("enter mark...\n");
scanf("%g",&o1.mark);

printf("%d , %s , %g\n",o1.rollno,o1.name,o1.mark);

}
