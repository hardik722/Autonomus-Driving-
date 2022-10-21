#include<stdio.h>
#include<stdlib.h>
struct one
{
int i;
char *name;
};
void print(struct one *);
void main()
{
struct one *p;
p=malloc(sizeof(struct one));
p->name=calloc(10,1);
//printf("enter struct ele...\n");
printf("enter i...\n");
scanf("%d",&p->i);
printf("enter name...\n");
scanf("%s",p->name);
print(p);
}
void print(struct one *q)
{
printf("struct ele are...\n");
printf("%d %s\n",q->i,q->name);
}

