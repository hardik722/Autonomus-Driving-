#include<stdio.h>
#include<string.h>
struct one
{
int rollno;
char name;
float t_mark;
};
void main()
{
struct one o1,*p;
p=&o1;
printf("enter rollno...\n");
scanf("%d",&p->rollno);
printf("enter name...\n");
scanf("%s",p->name);
printf("enter total marks...\n");
scanf("%g",&p->t_mark);
printf("%d %s %g\n",p->rollno,p->name,p->t_mark);
p->rollno=20;
strcpy((p->name),"mnop");
printf("%d %s %g\n",p->rollno,p->name,p->t_mark);


}






















/*printf("enter rollno...\n");
scanf("%d",&o1.rollno);
printf("enter name...\n");
scanf("%s",o1.name);
printf("enter total marks...\n");
scanf("%g",&o1.t_mark);
printf("%d %s %g\n",o1.rollno,o1.name,o1.t_mark);
}*/
