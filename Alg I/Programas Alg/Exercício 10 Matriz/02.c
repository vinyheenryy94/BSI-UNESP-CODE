#include <stdio.h>

#define N 3

int main() {
    int matriz[N][N];
    int soma_referencia = 0;
    int soma_diagonal = 0;
    int is_quadrado_magico = 1;

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Digite o elemento matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            // Calcula a soma da primeira linha para ser usada como referência
            if (i == 0) {
                soma_referencia += matriz[i][j];
            }

            // Verifica a soma da diagonal principal
            if (i == j) {
                soma_diagonal += matriz[i][j];
            }
        }
    }

    // Verifica se a soma das linhas e das colunas coincide com a referência
    for (int i = 0; i < N; i++) {
        int soma_linha = 0;
        int soma_coluna = 0;

        for (int j = 0; j < N; j++) {
            soma_linha += matriz[i][j];
            soma_coluna += matriz[j][i];
        }

        if (soma_linha != soma_referencia || soma_coluna != soma_referencia) {
            is_quadrado_magico = 0;
            break;
        }
    }

    if (soma_diagonal != soma_referencia) {
        is_quadrado_magico = 0;
    }

    if (is_quadrado_magico) {
        printf("A matriz é um quadrado mágico.\n");
    } else {
        printf("A matriz não é um quadrado mágico.\n");
    }

    return 0;
}

