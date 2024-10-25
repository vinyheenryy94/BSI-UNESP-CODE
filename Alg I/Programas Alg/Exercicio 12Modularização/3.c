#include <stdio.h>

void preencherMatriz(int matriz[][5]) {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void obterLinha(int matriz[][5], int linha, int vetor[]) {
    int i;
    for (i = 0; i < 5; i++) {
        vetor[i] = matriz[linha][i];
    }
}

void imprimirVetor(int vetor[]) {
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int matriz[5][5];
    int linha;
    int vetor[5];
    
    preencherMatriz(matriz);
    
    printf("Digite o número da linha (0-4) para obter o vetor correspondente: ");
    scanf("%d", &linha);
    
    obterLinha(matriz, linha, vetor);
    
    printf("O vetor correspondente à linha %d é: ", linha);
    imprimirVetor(vetor);
    
    return 0;
}

