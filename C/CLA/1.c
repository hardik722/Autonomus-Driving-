#include<stdio.h>
int my_strlen(char *);
void main(int argc,char **argv)
{
	if(argc!=2)
	{
	printf("Usage:./a.out string\n");
	return;
	}
int l;
l=my_strlen(argv[1]);
printf("l=%d\n",l);
}

int my_strlen(char *p)
{
int i;
for(i=0;p[i];i++);
return i;


/*{
char s[10];
int l;
printf("enter str..\n");
scanf("%s",s);
l=my_strlen(s);
printf("%d\n",l);
}*/



/*{
char s[10]="abcde";
int l;
l=my_strlen(s);
printf("l=%d\n",l);
}*/

}
