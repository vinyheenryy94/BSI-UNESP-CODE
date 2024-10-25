#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removerEspacos(char* frase) {
    int tamanho = strlen(frase);
    int inicio = 0;
    int fim = tamanho - 1;

    // Remover espaços do início da frase
    while (isspace(frase[inicio])) {
        inicio++;
    }

    // Remover espaços do final da frase
    while (isspace(frase[fim])) {
        fim--;
    }

    // Copiar a parte relevante da frase
    int i, j = 0;
    for (i = inicio; i <= fim; i++) {
        frase[j++] = frase[i];
    }
    frase[j] = '\0';
}

int main() {
    char frase[100];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';

    removerEspacos(frase);

    printf("Frase sem espaços no início e no final: %s\n", frase);

    return 0;
}

