/*
Faça um programa, com reprocessamento, 
que leia uma frase e mostre as palavras terminadas em consoantes da frase.
*/


#include <stdio.h>
#include <string.h>

int main(){
	
	char frase[100], *palavra;
	int reproc;
	
	do{
		
		printf("Digite uma frase: ");
		gets(frase);
		
		palavra = strtok(frase, " .,-:!");
		while(palavra != NULL){
			
			if((palavra [strlen(palavra)-1]!= 'A' && palavra [strlen(palavra)-1]!= 'a') && (palavra [strlen(palavra)-1]!= 'E' && palavra [strlen(palavra)-1]!= 'e')&& (palavra [strlen(palavra)-1]!= 'I' && palavra [strlen(palavra)-1]!= 'i')&& (palavra [strlen(palavra)-1]!= 'O' && palavra [strlen(palavra)-1]!= 'o') && (palavra [strlen(palavra)-1]!= 'U' && palavra [strlen(palavra)-1]!= 'u'));
				printf("%s\n", palavra);
			palavra = strtok(NULL, ".,-:!");
		}
		
		printf("Se quiser continuar digite 1 ou outro numero para sair: ");
		scanf("%d", &reproc);
	}while(reproc == 1);
}
