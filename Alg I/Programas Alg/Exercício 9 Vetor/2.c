#include <stdio.h>

int main() {
    int vetor[15];
    int i;
    int maior = 0;

    // Leitura dos elementos do vetor
    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < 15; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
        
        // Encontra o maior valor do vetor
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    // Divisão de todos os elementos pelo maior valor
    for (i = 0; i < 15; i++) {
        vetor[i] = vetor[i] / maior;
    }

    // Mostra o vetor após os cálculos
    printf("\nVetor após os cálculos:\n");
    for (i = 0; i < 15; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

