#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 50

int main(){
	
	char frase[MAX];
	printf("Digite uma frase: ");
	gets(frase);
	
	for(int i = 0; i < strlen(frase); i++){         //strlen serve para contar cada caracter da frase
		if(toupper(frase[i] ) != 'A' && toupper(frase[i] ) != 'E' && toupper(frase[i] ) != 'I' && toupper(frase[i] ) != 'O' && toupper(frase[i] ) != 'U')
		frase[i] = toupper(frase[i]);
		else
			frase[i] = tolower(frase[i]);
	}
	
	puts(frase);
	
	return 0;
}
