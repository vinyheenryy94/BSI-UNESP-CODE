#include <stdio.h>

int main() {
    float notas1[5];
    float notas2[5];
    float media[5];
    
    printf("Digite as notas do primeiro aluno:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas1[i]);
    }
    
    printf("Digite as notas do segundo aluno:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas2[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        media[i] = (notas1[i] + notas2[i]) / 2;
    }
    
    printf("\nMédias dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d: %.2f\n", i + 1, media[i]);
    }
    
    return 0;
}

