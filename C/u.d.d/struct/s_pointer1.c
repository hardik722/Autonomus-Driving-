#include<stdio.h>
#include<stdlib.h>
struct one 
{
int rollno;
char *name;
float t_mark;
};
void main()
{
//struct one o1;
struct one *p;
p=malloc(sizeof(struct one));

p->name = malloc(sizeof(char)*10);

printf("enter rollno...\n");
scanf("%d",&p->rollno);
printf("enter name...\n");
scanf("%s",p->name);
printf("enter to.marks...\n");
scanf("%g",&p->t_mark);


printf("%d %s %g\n",p->rollno,p->name,p->t_mark);

}
