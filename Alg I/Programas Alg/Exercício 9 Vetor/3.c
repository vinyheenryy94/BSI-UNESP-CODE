#include <stdio.h>

#define MAX_ALUNOS 45

int main() {
    int numAlunos;
    float alturas[MAX_ALUNOS];
    float somaAlturas = 0;
    float media;
    int maisAltos = 0;
    int maisBaixos = 0;

    // Leitura do número de alunos
    printf("Digite o número de alunos (até %d): ", MAX_ALUNOS);
    scanf("%d", &numAlunos);

    // Leitura das alturas dos alunos
    printf("Digite as alturas dos %d alunos:\n", numAlunos);
    for (int i = 0; i < numAlunos; i++) {
        printf("Altura do aluno %d: ", i + 1);
        scanf("%f", &alturas[i]);
        somaAlturas += alturas[i];
    }

    // Cálculo da média das alturas
    media = somaAlturas / numAlunos;

    // Contagem de alunos mais altos e mais baixos que a média
    for (int i = 0; i < numAlunos; i++) {
        if (alturas[i] > media) {
            maisAltos++;
        } else if (alturas[i] < media) {
            maisBaixos++;
        }
    }

    // Exibição dos resultados
    printf("\nMédia das alturas: %.2f\n", media);
    printf("Alunos mais altos que a média: %d\n", maisAltos);
    printf("Alunos mais baixos que a média: %d\n", maisBaixos);

    return 0;
}

