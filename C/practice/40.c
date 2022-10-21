#include<stdio.h>
#include<stdlib.h>
struct st
{
int rollno;
char name[10];
float t_marks;
};
typedef struct st ST;
void fun1(ST**);
void main()
{
ST *p;
fun1(&p);
printf("enter data...\n");
scanf("%d%s%f",&p->rollno,p->name,&p->t_marks);
printf("***%d %s %g\n",p->rollno,p->name,p->t_marks);

}
void fun1(ST **ptr)
{
*ptr=malloc(sizeof(ST));
}
