#include<stdio.h>
#include<stdlib.h>
struct one
{
int rollno;
char name[10];
float t_mark;
};
void main()
{
struct one *p[3];
int i;
for(i=0;i<3;i++)
p[i]=malloc(sizeof(struct one));


for(i=0;i<3;i++)
{
printf("enter %d student data...\n",i);
printf("enter rollno...\n");
scanf("%d",&p[i]->rollno);
printf("enter name...\n");
scanf("%s",p[i]->name);
printf("enter to.marks...\n");
scanf("%g",&p[i]->t_mark);
}
for(i=0;i<3;i++)
printf("%d %s %g\n",p[i]->rollno,p[i]->name,p[i]->t_mark);
}
