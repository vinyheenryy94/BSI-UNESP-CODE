#include <stdio.h>

int main(){
	
	float metro, jardas;
	int parada;
	do{
		do{
		
		printf("Digite um valor em metros: ");
		scanf("%f", &metro);
		}while(metro ==0); //verificação, se for 0 ele pede pra digitar

			jardas = metro*1.093613;
			printf("O valor em jardas eh: %f\n ", jardas);
	
			printf("Para continuar digite 1\n", parada);
			scanf("%d", &parada);
		}while(parada ==1);    //reprocessamento
	
}
