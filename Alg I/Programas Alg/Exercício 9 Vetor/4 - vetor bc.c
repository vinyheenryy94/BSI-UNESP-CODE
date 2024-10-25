#include <stdio.h>

int main() {
    int vetor[20];

    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    // Realiza as trocas
    for (int i = 0; i < 10; i++) {
        int temp = vetor[i];
        vetor[i] = vetor[19 - i];
        vetor[19 - i] = temp;
    }

    printf("Vetor modificado:\n");
    for (int i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}

