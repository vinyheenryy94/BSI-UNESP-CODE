// Faça um programa que receba uma frase e troque as vogais 
// existentes nesta frase por um asterisco (*). 

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	
	char frase[50];
	printf("Digite uma frase: ");
	gets(frase);
	
	for(int i = 0; i < strlen(frase); i++){
		if(toupper(frase[i]) == 'A' || toupper(frase[i]) == 'E' || toupper(frase[i]) == 'I' ||  toupper(frase[i]) == 'O' ||  toupper(frase[i]) == 'U')
		frase[i] = toupper(frase[i]);
		else
			frase[i] = tolower(frase[i]);
	
	}
	puts(frase);
}
