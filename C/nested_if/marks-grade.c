#include<stdio.h>
void main()
{
int m;
printf("enter the marks=");
scanf("%d",&m);

if(m>=40)
 {
if(m>=60)
     {
       if(m>=75 )
       {
       printf("A grade\n");
       }
       else
       {
       printf("B grade\n");
       }
     }
   else
    {
     printf("c grade\n");
    }
 }
else
{
printf("fail\n");
}



}
