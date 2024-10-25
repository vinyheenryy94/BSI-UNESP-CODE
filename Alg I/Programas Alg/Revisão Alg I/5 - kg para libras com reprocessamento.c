#include <stdio.h>

int main(){
	
	float kg, libras;
	int parada;
	
	do{
	
		do{
		
			printf("Digite um valor em hectares Kg: ");
			scanf("%f", &kg);
		}while(kg == 0);
			libras = kg*2.204623;
			printf("O valor em libras eh: %f\n ", libras);
			printf("Deseja continuar? Digite 1\n", parada);
			scanf("%d", &parada);
		}while(parada == 1);
	
}
