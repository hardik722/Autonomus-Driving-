#include<stdio.h>
struct st
{
	int rollno;
	char name[10];
	float t_mark;
	struct date
	{
		int date;
		char month[10];
		int year;
	}dob,doj;

};
void main()
{
struct st o1;
printf("enter rollno...\n");
scanf("%d",&o1.rollno);
printf("enter name...\n");
scanf("%s",o1.name);
printf("enter t.mark...\n");
scanf("%g",&o1.t_mark);

printf("enter dob...\n");
printf("enter date...\n");
scanf("%d",&o1.dob.date);
printf("enter month..\n");
scanf("%s",o1.dob.month);
printf("enter year...\n");
scanf("%d",&o1.dob.year);

printf("enter doj...\n");
printf("enter date...\n");
scanf("%d",&o1.doj.date);
printf("enter month..\n");
scanf("%s",o1.doj.month);
printf("enter year...\n");
scanf("%d",&o1.doj.year);

printf("%d %s %g\n",o1.rollno,o1.name,o1.t_mark);
printf("date of birth...\n");
printf("%d %s %d\n",o1.dob.date,o1.dob.month,o1.dob.year);
printf("date of joining...\n");
printf("%d %s %d\n",o1.doj.date,o1.doj.month,o1.doj.year);
}


