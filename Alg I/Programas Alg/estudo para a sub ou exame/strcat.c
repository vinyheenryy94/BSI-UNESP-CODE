#include<stdio.h>
#include<string.h>

void main(void){
	
	char *frase[50];
	char *blank = " ";
	char *descricao = "eh um local bonito";
	char *local = "Rio de Janeiro";
	
	strcpy(frase, local);
	strcat(frase, blank);
	strcat(frase, descricao);
	printf("%s", frase);
}
