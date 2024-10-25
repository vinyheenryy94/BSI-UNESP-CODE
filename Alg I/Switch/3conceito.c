#include <stdio.h>

int main(){
	
	char conceito;
	
	printf("Digite o conceito do aluno em letra maiuscula: ");
	scanf("%c", &conceito);
	
	switch (conceito){
		case 'A': printf("Excelente"); break;
		case 'B': printf("Otimo"); break;
		case 'C': printf("Bom"); break;
		case 'D': printf("Regular"); break;
		case 'E': printf("Ruim"); break;
		case 'F': printf("Reprovado"); break;
		default: printf("Esse conceito nao existe, tente de A a F"); break;
	}
	
	return 0;
}