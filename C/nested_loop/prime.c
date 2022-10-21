#include<stdio.h>
void main()
{
int i,j,c;
//printf("enter n1 and n2\n");
//scanf(" %d%d",&n1,&n2);

for(i=0,c=0;c<15;i++)
{ 
    for(j=2;j<i;j++)
    {
     if(i%j==0)
     break;
    }
    if(i==j)
   {
    printf("%d ",i); 
    c++;
    }
}
printf("\nc=%d\n",c);

}
 	
