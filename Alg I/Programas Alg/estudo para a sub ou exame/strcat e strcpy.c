#include<stdio.h>
#include<string.h>

int main(){
	
	char frase[50];
	char *nome = "Vinicius";
	char *blank = " ";
	char *sobrenome = "Henrique";
	
	strcpy(frase, nome);
	strcat(frase, blank);
	strcat(frase, sobrenome);
	
	printf("%s", frase);
}
