#include <stdio.h>

int main() {
    int n;
    printf("Digite a ordem da matriz: ");
    scanf("%d", &n);

    int matriz[n][n];
    int frequencia[n];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Digite o elemento matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Verifica se cada linha � uma permuta��o dos inteiros de 1 a n
    for (int i = 0; i < n; i++) {
        // Inicializa o vetor de frequ�ncia
        for (int k = 0; k < n; k++) {
            frequencia[k] = 0;
        }

        // Conta a frequ�ncia dos elementos na linha
        for (int j = 0; j < n; j++) {
            int elemento = matriz[i][j];
            if (elemento < 1 || elemento > n || frequencia[elemento - 1] == 1) {
                printf("A matriz n�o � um quadrado latino de ordem %d.\n", n);
                return 0;
            }
            frequencia[elemento - 1] = 1;
        }
    }

    // Verifica se cada coluna � uma permuta��o dos inteiros de 1 a n
    for (int j = 0; j < n; j++) {
        // Inicializa o vetor de frequ�ncia
        for (int k = 0; k < n; k++) {
            frequencia[k] = 0;
        }

        // Conta a frequ�ncia dos elementos na coluna
        for (int i = 0; i < n; i++) {
            int elemento = matriz[i][j];
            if (elemento < 1 || elemento > n || frequencia[elemento - 1] == 1) {
                printf("A matriz n�o � um quadrado latino de ordem %d.\n", n);
                return 0;
            }
            frequencia[elemento - 1] = 1;
        }
    }

    printf("A matriz � um quadrado latino de ordem %d.\n", n);

    return 0;
}

