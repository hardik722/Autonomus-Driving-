#include<stdio.h>
void main()
{
int n;
printf("enter n...\n");
scanf("%d",&n);
int a[n],i,even=0,odd=0;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(i=0;i<n;i++)
{
if(a[i]%2==0)
even++;
else
odd++;
}
printf("even=%d odd=%d\n",even,odd);

}
