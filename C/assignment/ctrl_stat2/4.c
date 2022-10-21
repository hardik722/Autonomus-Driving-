#include<stdio.h>
void main()
{
int day,week,year;
printf("enter the day= ");
scanf("%d",&day);

year=day/365;
printf("year=%d\n",year);

week=(day-(year*365))/7;
printf("week=%d\n",week);

day=day-((week*7)+(year*365));	
printf("day=%d\n",day);

}
