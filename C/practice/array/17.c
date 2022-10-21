#include<stdio.h>
void main()
{
int n;
printf("enter n...\n");
scanf("%d",&n);
int a[n],i,j,c=0;
printf("enter n ele...\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
if(a[i]==a[j])
{
c++;
break;
}
}
printf("c=%d\n",c);
}
