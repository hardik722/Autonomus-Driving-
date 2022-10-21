#include<stdio.h>
void main()
{
char s[100];
int i,c1=0,c2=0;
printf("enter str...\n");
scanf("%[^\n]",s);

for(i=0;s[i];i++)
{
if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| 
      s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O'|| s[i]=='U')
{
c1++;
}
else
c2++;
}
printf("vovel=%d\n",c1);
printf("consonant=%d\n",c2);

}
			
