#include<stdio.h>
#include<stdlib.h>
struct st
{
	int rollno;
	char name[10];
	float t_mark;
};
void allocate_memory(struct st **);
void main()
{
	struct st *p;
	allocate_memory(&p);
	printf("enter rollno...\n");
	scanf("%d",&p->rollno);
	printf("enter name...\n");
	scanf("%s",p->name);
	printf("enter t_marks..\n");
	scanf("%f",&p->t_mark);

	printf("%d %s %g\n",p->rollno,p->name,p->t_mark);

}
void allocate_memory(struct st **q)
{
	*q=malloc(sizeof(struct st));
}
