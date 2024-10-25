#include <stdio.h>
#include <string.h>

void inverterPalavras(char *frase) {
    char *palavra = strtok(frase, " ");
    
    while (palavra != NULL) {
        int tamanho = strlen(palavra);
        
        for (int i = 0; i < tamanho / 2; i++) {
            char temp = palavra[i];
            palavra[i] = palavra[tamanho - i - 1];
            palavra[tamanho - i - 1] = temp;
        }
        
        palavra = strtok(NULL, " ");
    }
}

int main() {
    char frase[100];
    
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    
    frase[strcspn(frase, "\n")] = '\0'; // Remove a quebra de linha da entrada
    
    printf("Frase original: %s\n", frase);
    
    inverterPalavras(frase);
    
    printf("Frase invertida: %s\n", frase);
    
    return 0;
}

