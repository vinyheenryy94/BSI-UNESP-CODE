#include <stdio.h>
int main (){
	int op = 1, reg;
	float media, soma, n1, n2;
	while(op != 0){
		printf("Digite o seu registro academico: ");
		scanf("%d", &reg);
		printf("Digite suas duas notas: ");
		scanf("%f %f", &n1, &n2);
		soma = n1 + n2;
		media = (soma) / 2;
		printf("Sua media final eh: %.1f\n", media);
		if(media < 5){
			printf("E\n");
			printf("Reprovado\n");
		} 
			else if(media >= 5 && media < 6){
				printf("D\n");
				printf("Voce esta em exame! Estude!\n");
			}
				else if(media >= 6 && media < 7){
					printf("C\n");
					printf("Aprovado\n");
				}
					else if (media >=7 && media < 8){
						printf("B\n");
						printf("Aprovado\n");
					}
						else{
							printf("A\n");
							printf("Aprovado\n");
						}
		
	
		printf("Voce deseja fazer a media novamente? Clique 0 para sair ou 1 para continuar: ");
		scanf("%d", &op);
	}
}
