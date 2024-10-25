#include <stdio.h>

int main() {
    float vetor[100];

    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < 100; i++) {
        scanf("%f", &vetor[i]);
    }

    printf("Valores menores ou iguais a 10:\n");
    for (int i = 0; i < 100; i++) {
        if (vetor[i] <= 10) {
            printf("A[%d] = %.1f\n", i, vetor[i]);
        }
    }

    return 0;
}

