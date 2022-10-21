#include<stdio.h>
#include<stdlib.h>
struct st
{
int rollno;
char name[10];
float t_mark;
};
struct st* allocate_memory(void);
void main()
{
struct st *p;
p=allocate_memory();
printf("enter rollno..\n");
scanf("%d",&p->rollno);
printf("enter name...\n");
scanf("%s",p->name);
printf("enter t.mark...\n");
scanf("%f",&p->t_mark);

printf("%d %s %g\n",p->rollno,p->name,p->t_mark);
}
struct st* allocate_memory(void)
{
struct st *q;
q=malloc(sizeof(struct st));
return q;
}

