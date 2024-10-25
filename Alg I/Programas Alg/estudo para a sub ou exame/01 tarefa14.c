#include <stdio.h>

int main() {
  float alunoAprovado[100];
  float alunoReprovado[100];
  float alunos[100];
  float somaNotas = 0;
  int qtdeaprovados = 0, qtdereprovados = 0, qtdealunos = 0;

  printf("Digite a quantidade de alunos: ");
  scanf("%d", &qtdealunos);

  for (int i = 0; i < qtdealunos; i++) {
    printf("Digite a nota do aluno: ");
    scanf("%f", &alunos[i]);
  }

  for (int i = 0; i < qtdealunos; i++) {
    somaNotas += alunos[i];
  }
  printf("A media final eh: %.2f\n", somaNotas / qtdealunos);


  for (int i = 0; i < qtdealunos; i++) {
    if (alunos[i] >= 7) {
      alunoAprovado[qtdeaprovados] = alunos[i];
      qtdeaprovados++;
    } else {
      alunoReprovado[qtdereprovados] = alunos[i];
      qtdereprovados++;
    }
  }
  printf("A quantidade de alunos aprovados eh: %d\n ", qtdeaprovados);
  printf("A quantidade de alunos reprovados eh: %d\n ", qtdereprovados);

  return 0;
}
