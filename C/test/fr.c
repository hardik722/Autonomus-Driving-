#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fp = fopen("data", "r");
	fseek(fp, 0, SEEK_END);
	int size = ftell(fp);
	rewind(fp);
	char *p = malloc(size+1);
	char ch;
	int i=0,j;
	while((ch=fgetc(fp)) != -1){
		p[i] = ch;
		i++; 
	}
	p[i] = '\0';
	char t;
	for(i=0, j=size-1; i<j; i++,j--){
		t = p[i];
		p[i] = p[j];
		p[j] = t;
	}
	fclose(fp);

	fp = fopen("data", "w");
	i=0;
	while(p[i]){
		fputc(p[i], fp);
		i++;
	}
}
