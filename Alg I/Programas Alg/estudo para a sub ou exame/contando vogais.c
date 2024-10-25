#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[100];
    int vogais[5] = {0}; // uma posição para cada vogal (A, E, I, O, U)
    int i;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (i = 0; i < strlen(frase); i++) {
        char c = toupper(frase[i]); // converte para maiúscula para facilitar a comparação

        switch (c) {
            case 'A':
                vogais[0]++;
                break;
            case 'E':
                vogais[1]++;
                break;
            case 'I':
                vogais[2]++;
                break;
            case 'O':
 				vogais[3]++;
                break;
            case 'U':
                vogais[4]++;
                break;
        }
    }

    printf("Quantidade de vogais:\n");
    printf("A: %d\n", vogais[0]);
    printf("E: %d\n", vogais[1]);
    printf("I: %d\n", vogais[2]);
    printf("O: %d\n", vogais[3]);
    printf("U: %d\n", vogais[4]);

}
