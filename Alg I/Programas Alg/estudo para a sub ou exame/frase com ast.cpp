#include <stdio.h>
#include <string.h>

int main(){
	
	char frase[100];
	
	printf("Digite uma frase: ");
	gets(frase);
	
	for(int i = 0; i < strlen(frase); i++){
		if(toupper(frase[i] ) == 'A' || toupper(frase[i] ) == 'E' || toupper(frase[i] ) == 'I' || toupper(frase[i] ) == 'O' || toupper(frase[i] ) == 'U')
		frase[i] = "*";
	}
	
	puts(frase);
}
