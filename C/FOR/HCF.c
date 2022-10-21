/*HCF:highest common fector
example :
fector of 12 = 1,2,3,[6],12
fector of 30 = 1,2,3,[6],10,15,30
--->highest common is === 6 
--->1,2,3 are also fector but 6 is highest fector.*/

#include<stdio.h>
void main()
{
int num1,num2,i,min,HCF;
printf(" num1= ");
scanf(" %d",&num1);
printf(" num2= ");
scanf(" %d",&num2);

min=num1<num2?num1:num2;
for(i=1;i<=min;i++)
{	
	if(num1%i==0 && num2%i==0)
	HCF=i;
}

printf(" HCF=%d\n",HCF);

}

