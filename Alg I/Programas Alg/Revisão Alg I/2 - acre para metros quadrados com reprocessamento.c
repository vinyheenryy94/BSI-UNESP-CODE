#include <stdio.h>

int main(){
	
	float acre, metroquad;
	int parada;
	do{
		do{
		
		printf("Digite um valor em acre: ");
		scanf("%f", &acre);
		}while(acre == 0); //verificação
		
			metroquad = acre*4046.856422;
			printf("O valor em metros quadrado eh: %f\n ", metroquad);
			
			printf("Para continuar digite 1\n", parada);
			scanf("%d", &parada);
		}while(parada == 1); // reprocessamento
}
