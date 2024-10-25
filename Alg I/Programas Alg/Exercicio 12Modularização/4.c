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

void imprimirMatriz(int matriz[][5]) {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void encontrarTransposta(int matriz[][5], int transposta[][5]) {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

int main() {
    int matrizA[5][5];
    int transpostaA[5][5];
    
    printf("Preencha a matriz A:\n");
    preencherMatriz(matrizA);
    
    encontrarTransposta(matrizA, transpostaA);
    
    printf("\nMatriz A:\n");
    imprimirMatriz(matrizA);
    
    printf("\nTransposta de A:\n");
    imprimirMatriz(transpostaA);
    
    return 0;
}

