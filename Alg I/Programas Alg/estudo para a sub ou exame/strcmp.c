#include<stdio.h>
#include<string.h>

void main(void){
	char *nome1 = "vinicius", *nome2 = "sirlei";
	int comp;
	
	comp = strcmp(nome1, nome2);
	if(comp > 0)
		printf("Cadeia (%s) eh maior que a cadeia (%s)\n", nome1, nome2);
	else
		printf("Cadeia (%s) eh menor que a cadeia (%s)\n", nome1, nome2);
		
}
