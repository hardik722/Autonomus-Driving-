#include<stdio.h>
#include<stdlib.h>
struct one
{
int rollno;
char name[10];
float t_marks;
};
void alloc_mem(struct one **);
void main()
{
struct one *q;
alloc_mem(&q);
printf("enter data...\b");
scanf("%d%s%f",&q->rollno,q->name,&q->t_marks);
printf("the given data are...\n");
printf("%d %s %g\n",q->rollno,q->name,q->t_marks);
}
void alloc_mem(struct one **p)
{
struct one *m;
*p=malloc(sizeof(struct one));
}
