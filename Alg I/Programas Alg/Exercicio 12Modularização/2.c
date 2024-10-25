#include <stdio.h>

void calcularMedia(const int vetor[], int N, float* media) {
    int soma = 0;
    int i;
    for (i = 0; i < N; i++) {
        soma += vetor[i];
    }
    *media = (float)soma / N;
}

void encontrarMaior(const int vetor[], int N, int* maior) {
    *maior = vetor[0];
    int i;
    for (i = 1; i < N; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }
    }
}

int encontrarMenor(const int vetor[], int N) {
    int menor = vetor[0];
    int i;
    for (i = 1; i < N; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    return menor;
}

float calcularPercentualMultiplosDe3(const int vetor[], int N) {
    int count = 0;
    int i;
    for (i = 0; i < N; i++) {
        if (vetor[i] % 3 == 0) {
            count++;
        }
    }
    return ((float)count / N) * 100;
}

int main() {
    int N;
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    // Valida��o do valor de N
    while (N <= 0) {
        printf("Valor inv�lido para N. Digite novamente: ");
        scanf("%d", &N);
    }

    int vetor[N];
    int i;
    for (i = 0; i < N; i++) {
        printf("Digite o n�mero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    float media;
    calcularMedia(vetor, N, &media);
    printf("A m�dia dos n�meros �: %.2f\n", media);

    int maior;
    encontrarMaior(vetor, N, &maior);
    printf("O maior n�mero �: %d\n", maior);

    int menor = encontrarMenor(vetor, N);
    printf("O menor n�mero �: %d\n", menor);

    float percentual = calcularPercentualMultiplosDe3(vetor, N);
    printf("O percentual de n�meros m�ltiplos de 3 �: %.2f%%\n", percentual);

    return 0;
}

