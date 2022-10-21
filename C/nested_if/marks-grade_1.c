#include<stdio.h>
void main()
{
int m;
printf("enter the marks=");
scanf("%d",&m);

if(m>=0 && m<=100 )
  {  
    if (m<=74  )
     {  
 	if(m<=59)
  	{
	   if (m<=39)
	   {
           printf("fail in the exam\n");
	   }
	   else
 	   {
	   printf("C grade\n");
	   }
        }
	else
	{
	printf("B grade\n");
	}
    }
    else
    { 
    printf("A grade\n");
    }
}
else
{
printf("enter the marks between 0 and 100\n");
}





}

 
