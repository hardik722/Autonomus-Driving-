#include<stdio.h>
int main()
{
    //char s[5] = {'a','b','c','d','f'};
    void *ptr;
    printf("p=%d\n",sizeof(ptr));
    ptr = ptr + 2;
    printf("%c\n", *(char *)ptr);
	return 0;
}
