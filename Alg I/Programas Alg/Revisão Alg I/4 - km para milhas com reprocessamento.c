#include <stdio.h>

int main(){
	
	float km, milhas;
	int parada;
	
	do{
		do{
		
	
			printf("Digite um valor em Km/h: ");
			scanf("%f", &km);
		}while(km == 0);
			milhas = km*0.621371;
			printf("O valor em Milhas/hora eh: %f\n ", milhas);
	
			printf("Quer continuar? Digite 1: \n");
			scanf("%d", &parada);
		}while(parada == 1);
}
