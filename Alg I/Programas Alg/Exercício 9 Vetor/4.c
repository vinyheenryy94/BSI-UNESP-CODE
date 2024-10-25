#include <stdio.h>

#define NUM_POLTRONAS 100

int main() {
    int poltronas[NUM_POLTRONAS] = {0}; // Todas as poltronas s�o inicialmente dispon�veis (0 representa dispon�vel)
    int numPoltrona;

    while (1) {
        // Mostra todas as poltronas (vendidas e dispon�veis)
        printf("\nPoltronas dispon�veis:\n");
        for (int i = 0; i < NUM_POLTRONAS; i++) {
            if (poltronas[i] == 0) {
                printf("%d ", i + 1);
            }
        }
        printf("\n");

        // Leitura do n�mero da poltrona escolhida pelo usu�rio
        printf("\nDigite o n�mero da poltrona desejada (0 para sair): ");
        scanf("%d", &numPoltrona);

        if (numPoltrona == 0) {
            break; // Sai do loop se o usu�rio digitar 0
        }

        // Verifica se a poltrona escolhida est� dispon�vel
        if (poltronas[numPoltrona - 1] != 0) {
            printf("Poltrona %d j� est� ocupada. Escolha outra.\n", numPoltrona);
        } else {
            // Vende a poltrona
            poltronas[numPoltrona - 1] = 1; // Marca a poltrona como vendida (1 representa ocupada)
            printf("Poltrona %d vendida com sucesso!\n", numPoltrona);
        }
    }

    printf("\nPrograma encerrado.\n");

    return 0;
}

