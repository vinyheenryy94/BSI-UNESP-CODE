#include <stdio.h>

#define MAX_N 10
#define MAX_M 10

int main() {
    int matriz[MAX_N][MAX_M];
    int n, m;

    printf("Digite a quantidade de linhas (N <= 10): ");
    scanf("%d", &n);

    printf("Digite a quantidade de colunas (M <= 10): ");
    scanf("%d", &m);

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Digite o elemento matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz original:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Matriz transposta:\n");
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

