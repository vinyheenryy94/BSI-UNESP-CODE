#include <stdio.h>

#define NUM_POLTRONAS 100

int main() {
    int poltronas[NUM_POLTRONAS] = {0}; // Todas as poltronas são inicialmente disponíveis (0 representa disponível)
    int numPoltrona;

    while (1) {
        // Mostra todas as poltronas (vendidas e disponíveis)
        printf("\nPoltronas disponíveis:\n");
        for (int i = 0; i < NUM_POLTRONAS; i++) {
            if (poltronas[i] == 0) {
                printf("%d ", i + 1);
            }
        }
        printf("\n");

        // Leitura do número da poltrona escolhida pelo usuário
        printf("\nDigite o número da poltrona desejada (0 para sair): ");
        scanf("%d", &numPoltrona);

        if (numPoltrona == 0) {
            break; // Sai do loop se o usuário digitar 0
        }

        // Verifica se a poltrona escolhida está disponível
        if (poltronas[numPoltrona - 1] != 0) {
            printf("Poltrona %d já está ocupada. Escolha outra.\n", numPoltrona);
        } else {
            // Vende a poltrona
            poltronas[numPoltrona - 1] = 1; // Marca a poltrona como vendida (1 representa ocupada)
            printf("Poltrona %d vendida com sucesso!\n", numPoltrona);
        }
    }

    printf("\nPrograma encerrado.\n");

    return 0;
}

