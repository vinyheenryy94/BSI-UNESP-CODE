#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removerEspacosSobrando(char* frase) {
    int tamanho = strlen(frase);
    int i, j = 0;
    int espacoAnterior = 0;

    for (i = 0; i < tamanho; i++) {
        if (isspace(frase[i])) {
            if (!espacoAnterior) {
                frase[j++] = ' ';
                espacoAnterior = 1;
            }
        } else {
            frase[j++] = frase[i];
            espacoAnterior = 0;
        }
    }
    frase[j] = '\0';
}

int main() {
    char frase[100];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';

    removerEspacosSobrando(frase);

    printf("Frase sem espaços sobrando: %s\n", frase);

    return 0;
}

