#include <stdio.h>

int main(){
	
	float hectares, acres;
	int parada;
	
	do{
	

	
		do{
		
			printf("Digite um valor em hectares: ");
			scanf("%f", &hectares);
			}while(hectares == 0);
		
				acres = hectares*2.471054;
				printf("O valor em acres eh: %f\n ", acres);
	
				printf("Deseja continuar? Digite 1\n", parada);
				scanf("%d", &parada);
			}while(parada == 1);
}
