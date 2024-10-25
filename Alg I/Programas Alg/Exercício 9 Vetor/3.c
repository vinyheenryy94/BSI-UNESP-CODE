#include <stdio.h>

#define MAX_ALUNOS 45

int main() {
    int numAlunos;
    float alturas[MAX_ALUNOS];
    float somaAlturas = 0;
    float media;
    int maisAltos = 0;
    int maisBaixos = 0;

    // Leitura do n�mero de alunos
    printf("Digite o n�mero de alunos (at� %d): ", MAX_ALUNOS);
    scanf("%d", &numAlunos);

    // Leitura das alturas dos alunos
    printf("Digite as alturas dos %d alunos:\n", numAlunos);
    for (int i = 0; i < numAlunos; i++) {
        printf("Altura do aluno %d: ", i + 1);
        scanf("%f", &alturas[i]);
        somaAlturas += alturas[i];
    }

    // C�lculo da m�dia das alturas
    media = somaAlturas / numAlunos;

    // Contagem de alunos mais altos e mais baixos que a m�dia
    for (int i = 0; i < numAlunos; i++) {
        if (alturas[i] > media) {
            maisAltos++;
        } else if (alturas[i] < media) {
            maisBaixos++;
        }
    }

    // Exibi��o dos resultados
    printf("\nM�dia das alturas: %.2f\n", media);
    printf("Alunos mais altos que a m�dia: %d\n", maisAltos);
    printf("Alunos mais baixos que a m�dia: %d\n", maisBaixos);

    return 0;
}

