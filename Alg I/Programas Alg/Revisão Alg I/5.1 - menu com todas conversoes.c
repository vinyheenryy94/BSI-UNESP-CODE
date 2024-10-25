#include <stdio.h>

int main(){
	
	float metros, jardas, acre, metroquad, hectares, km, milhas, kg, libras;
	int parada, menu;
	

	
	do{
	
		printf("O QUE DESEJA CALCULAR?\n");
		printf("1 - METROS PARA JARDAS\n");
		printf("2 - ACRE PARA METROS QUADRADOS\n");
		printf("3 - HECTARE PARA ACRES\n");
		printf("4 - KM PARA MILHAS\n");
		printf("5 - KG PARA LIBRAS\n");
		printf("6 - SAIR\n");
		
		scanf("%d", &menu);
		
		switch(menu){
			case 1:
				do{
		
				printf("Digite um valor em metros: ");
				scanf("%f", &metros);
				}while(metros ==0); 

				jardas = metros*1.093613;
				printf("O valor em jardas eh: %f\n ", jardas);
				break;
			
			case 2:
				do{
		
				printf("Digite um valor em acre: ");
				scanf("%f", &acre);
				}while(acre == 0); 
		
				metroquad = acre*4046.856422;
				printf("O valor em metros quadrado eh: %f\n ", metroquad);
				break;
				
			case 3:
				do{
		
				printf("Digite um valor em hectares: ");
				scanf("%f", &hectares);
				}while(hectares == 0);
		
				acre = hectares*2.471054;
				printf("O valor em acres eh: %f\n ", acre);
				break;
			
			case 4:
				do{	
	
				printf("Digite um valor em Km/h: ");
				scanf("%f", &km);
				}while(km == 0);
				
				milhas = km*0.621371;
				printf("O valor em Milhas/hora eh: %f\n ", milhas);
				break;
				
			case 5:
				do{
		
				printf("Digite um valor em Kg: ");
				scanf("%f", &kg);
				}while(kg == 0);
				
				libras = kg*2.204623;
				printf("O valor em libras eh: %f\n ", libras);
				break;
				
		}
	
	}while(menu != 6);	
}
