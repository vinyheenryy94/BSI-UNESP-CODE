#include <stdio.h>

#define TAMANHO 1000

int main() {
    int T, i, j;
    int N[TAMANHO];

    // Leitura do valor T
    scanf("%d", &T);

    // Preenchimento do vetor N
    j = 0;
    for (i = 0; i < TAMANHO; i++) {
        N[i] = j;
        j++;
        if (j == T) {
            j = 0;
        }
    }

    // Impressão do vetor N
    for (i = 0; i < TAMANHO; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}

