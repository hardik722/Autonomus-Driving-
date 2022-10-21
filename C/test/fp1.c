#include <stdio.h>

int main(){
	FILE *fp = fopen("data.txt", "r");
	int i;
	float f;
	char s[30];
	fscanf(fp, "%[^\n]", s);
	printf("%s\n",s);
}
