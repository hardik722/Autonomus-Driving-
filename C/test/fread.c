#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fp = fopen("data", "r");

	fseek(fp, 0, SEEK_END);
	int size = ftell(fp);
	char *p = malloc(size+1);
	rewind(fp);

	fread(p, size, 1, fp);
	p[size] = '\0';
	
	printf("%s", p);
}
