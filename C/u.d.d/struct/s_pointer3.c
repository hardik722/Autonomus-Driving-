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
struct one **p;
int n;
printf("enter n structur...\n");
scanf("%d",&n);
p=malloc(sizeof(char*)*n);
int i;
for(i=0;i<n;i++)
p[i]=malloc(sizeof(struct one));

for(i=0;i<n;i++)
{
printf("enter %d student data..\n",i);
printf("enter rollno...\n");
scanf("%d",&p[i]->rollno);
printf("enter name...\n");
scanf("%s",p[i]->name);
printf("enter t_marks...\n");
scanf("%g",&p[i]->t_mark);
}
for(i=0;i<n;i++)
printf("rollno=%d name=%s marks=%g\n",p[i]->rollno,p[i]->name,p[i]->t_mark);

}
