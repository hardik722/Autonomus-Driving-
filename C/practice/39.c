#include<stdio.h>
#include<stdlib.h>
struct st
{
int rollno;
char name[10];
float t_marks;
};
typedef struct st ST;
ST* fun1(void);
void main()
{
ST *p=fun1();
scanf("%d%s%g",&p->rollno,p->name,&p->t_marks);
printf("***%d %s %g\n",p->rollno,p->name,p->t_marks);
}
ST* fun1(void)
{
ST *p1=malloc(sizeof(ST));
return p1;
}

