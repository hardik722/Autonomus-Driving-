#include<stdio.h>
#include<stdlib.h>
struct one
{
int rollno;
char name[10];
float t_marks;
};
struct one* return_add(void);
void main()
{
struct one *q;
q=return_add();
printf("enter data ...\n");
scanf("%d%s%f",&q->rollno,q->name,&q->t_marks);
printf("given data is...\n");
printf("%d %s %g\n",q->rollno,q->name,q->t_marks);
}
struct one* return_add(void)
{
struct one *p;
p=malloc(sizeof(struct one));
return p;
}
