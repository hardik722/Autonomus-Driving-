#include<stdio.h>
void main()
{
int m;
printf("enter the marks=");
scanf("%d",&m);
if(m>=75 && m<=100)
{
 printf(" your grade is AA\n");
}
else if (m>=60 && m<=74)
{
printf("your grade is BB\n");
}
else if (m>=40 && m<=59)
{
printf("your grade is CC\n");
}
else if (m>=0 && m<=39)
{
printf("you are fail in the exam\n");
}
else
{
printf("enter the marks between 0 to 100 only\n");
}


}



