#include <stdio.h>
int main (){
	int mes;
	printf("Digite o mes: \n");
	scanf("%d", &mes);
	
	switch (mes){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("Tem 31 dias \n");
			break;
		case 4: case 6: case 9: case 11:
			printf("Tem 30 dias \n");
			break;
		case 2:
			printf("Tem 28 dias \n");
			break;
		default: printf("Mes invalido \n");
		
	}
return 0;
}
