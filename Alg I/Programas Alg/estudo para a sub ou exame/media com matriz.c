#include <stdio.h>

#define ALUNOS 3 // Número de alunos
#define NOTAS 5 // Número de notas

int main() {
    float notas[ALUNOS][NOTAS];
    float media[ALUNOS];
    
    printf("Digite as notas dos alunos:\n");
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        for (int j = 0; j < NOTAS; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }
    
    for (int i = 0; i < ALUNOS; i++) {
        float soma = 0;
        for (int j = 0; j < NOTAS; j++) {
            soma += notas[i][j];
        }
        media[i] = soma / NOTAS;
    }
    
    printf("\nMédias dos alunos:\n");
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d: %.2f\n", i + 1, media[i]);
    }
    
    return 0;
}

