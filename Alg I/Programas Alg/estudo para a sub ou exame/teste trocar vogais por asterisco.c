#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main(void){
	char frase [60];
	printf("Digite uma frase: ");
	gets(frase);
	
	for(int i = 0; i < strlen(frase); i++)
		if (toupper(frase[i])=='A'||toupper(frase[i])=='E'||toupper(frase[i])=='I'||toupper(frase[i])=='O'||toupper(frase[i])=='U')
        frase[i] = '?';
        
    puts(frase);
    return 0;
}
