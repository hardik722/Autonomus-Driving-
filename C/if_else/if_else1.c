//WAP to scan char from the user ,display it with its ascii code if given input is small.

#include<stdio.h>
void main()
{
char ch;

printf("enter the char..=");

scanf("%c",&ch);

   if(ch>='a' && ch<='z')

   {

   printf("ch=%c and ascii=%d\n",ch,ch);

   }

   else
   
   {
   
   printf("bye..\n");

   }

}
