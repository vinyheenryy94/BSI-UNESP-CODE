/*Sabe-se o tamanho do calçado muda conforme o país. Assim, podemos ter a tabela abaixo para o calçado
feminino. Faça a rotina para que dado o país original, o país destino e o tamanho do calçado (no país origem),
calcule o tamanho do sapato no país destino.*/


#include <stdio.h>

int main(){
	
	int menu, calcado, reprocess;
	float calcado2;
	
	do{
	
	
		printf("Voce quer saber o numero do calcado de que forma?\n");
		printf("1 - Brasil - EUA\n");
		printf("2 - EUA - Brasil\n");
		printf("3 - SAIR\n");
	
		scanf("%d", &menu);
	
		switch(menu){
			case 1:
				printf("Digite o numero do calcado: ");
				scanf("%d", &calcado);
				if(calcado == 33){
				printf("Brasil 33 e EUA 4.5\n");
				}
				else if(calcado == 34){
					printf("Brasil 34 e EUA 5.5\n");
				}
				else if(calcado == 35){
					printf("Brasil 35 e EUA 6\n");
				}
				else if(calcado == 36){
					printf("Brasil 36 e EUA 7\n");
				}
				else if(calcado == 37){
					printf("Brasil 37 e EUA 7.5\n");
				}
				else if(calcado == 38){
					printf("Brasil 38 e EUA 8.5\n");
				}
				else if(calcado == 39){
					printf("Brasil 39 e EUA 9\n");
				}
				else if(calcado == 40){
					printf("Brasil 40 e EUA 10\n");
				}
				else if (calcado < 33 || calcado > 40){
					printf("Digite de 33 a 40\n");
				}
				break;
			case 2:
			printf("Digite o numero do calcado: ");
			scanf("%f", &calcado2);
			if(calcado2 == 4.5){
				printf("EUA 4.5 e Brasil 33\n");
				}
				else if(calcado2 == 5.5){
					printf("EUA 5.5 e Brasil 34\n");
				}
				else if(calcado2 == 6){
					printf("EUA 6 e Brasil 35\n");
				}
				else if(calcado2 == 7){
					printf("EUA 7 e Brasil 36\n");
				}
				else if(calcado2 == 7.5){
					printf("EUA 7.5 e Brasil 37\n");
				}
				else if(calcado2 == 8.5){
					printf("EUA 8.5 e Brasil 38\n");
				}
				else if(calcado2 == 9){
					printf("EUA 9 e Brasil 39\n");
				}
				else if(calcado2 == 10){
					printf("EUA 10 e Brasil 40\n");
				}
				else if (calcado2 < 4.5 || calcado2 > 10){
					printf("Digite de 4.5 a 10\n");
				}
				break;
		}
	}while(menu != 3);
}
