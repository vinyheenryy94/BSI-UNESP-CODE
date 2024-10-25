#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char nome[20];
	
		printf("Digite o seu nome e substituirei as vogais por !: ");
		gets(nome);
		
		for(int i = 0; i < strlen(nome); i++){
			if(toupper(nome[i]) == 'A' || toupper(nome[i]) == 'E' || toupper(nome[i]) == 'I' || toupper(nome[i]) == 'O' || toupper(nome[i]) == 'U')
			nome[i] = '!';
		}
	
	
		puts(nome);
	

}
